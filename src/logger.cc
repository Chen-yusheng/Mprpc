#include "logger.h"
#include <time.h>
#include <iostream>

Logger &Logger::GetInstance()
{
    static Logger log;
    return log;
}

Logger::Logger()
{
    // 启动专门的写日志线程，从缓冲区中读取日志信息写入磁盘
    std::thread writeLogTask([&]()
                             {
        for(;;)
        {
            //获取当天的日期，然后取日志信息，追加写入对应的日志文件当中
            time_t now = time(nullptr);
            tm* nowtm = localtime(&now);

            char file_name[128] = {0};
            sprintf(file_name, "%04d-%02d-%02d-log.txt", nowtm->tm_year + 1900, nowtm->tm_mon + 1, nowtm->tm_mday);

            FILE * pf =fopen(file_name,"a+");
            if(pf == nullptr)  //日志文件打开不了，没法写日志
            {
                std::cout << "logger file: " << file_name << " can not open" << std::endl;
                exit(EXIT_FAILURE);
            }

            std::string msg = m_lckQue.Pop();

            char time_buf[128] = {0};
            sprintf(time_buf,"%02d:%02d:%02d =>[%s] ", 
                    nowtm->tm_hour, 
                    nowtm->tm_min, 
                    nowtm->tm_sec, 
                    (m_loglevel == INFO?"info" : "error"));
            msg.insert(0, time_buf);
            msg.append("\n");

            fputs(msg.c_str(), pf);
            fclose(pf);
        } });
    writeLogTask.detach(); // 设置分离线程，守护线程
}

void Logger::SetLogLevel(LogLevel level)
{
    m_loglevel = level;
}

// 把日志信息写入lockQueue缓冲区中
void Logger::Log(std::string msg)
{
    m_lckQue.Push(msg);
}
