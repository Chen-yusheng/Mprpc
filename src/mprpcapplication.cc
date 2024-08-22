#include "mprpcapplication.h"

#include <iostream>
#include <unistd.h>
#include <string>

// 静态成员变量在类外初始化
MprpcConfig MprpcApplication::m_config;

void showArgsHelp()
{
    std::cout << "format: command -i <configfile>" << std::endl;
}

// provider -i config.conf
void MprpcApplication::Init(int argc, char **argv)
{
    if (argc < 2)
    {
        showArgsHelp();
        exit(EXIT_FAILURE);
    }

    int c = 0;
    std::string config_file;
    while ((c = getopt(argc, argv, "i:")) != -1)
    {
        switch (c)
        {
        case 'i':
            config_file = optarg;
            break;
        case '?':
            showArgsHelp();
            exit(EXIT_FAILURE);
        case ':':
            showArgsHelp();
            break;
        default:
            exit(EXIT_FAILURE);
        }
    }

    // 开始加载配置文件 rpcserver_ip rpcserver_port zookeeper_ip zookeeper_port
    m_config.loadConfigFile(config_file);

    // std::cout << "rpcserverip:" << m_config.load("rpcserverip") << std::endl;
    // std::cout << "rpcserverport:" << m_config.load("rpcserverport") << std::endl;
    // std::cout << "zookeeperip:" << m_config.load("zookeeperip") << std::endl;
    // std::cout << "zookeeperport:" << m_config.load("zookeeperport") << std::endl;
}

MprpcApplication &MprpcApplication::GetInstance()
{
    static MprpcApplication app;
    return app;
}

MprpcConfig &MprpcApplication::GetConfig()
{
    return m_config;
}
