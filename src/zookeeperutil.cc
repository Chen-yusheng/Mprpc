#include "zookeeperutil.h"
#include "mprpcapplication.h"

#include <semaphore.h>
#include <iostream>

// 全局的watcher观察器  zkserver给zkclient的通知
void global_watcher(zhandle_t *zh, int type,
                    int state, const char *path, void *watcherCtx)
{
    if (type == ZOO_SESSION_EVENT) // 回调的消息类型  和会话相关的消息类型
    {
        if (state == ZOO_CONNECTED_STATE) // zkclient和zkserver连接成功
        {
            sem_t *sem = (sem_t *)zoo_get_context(zh);
            sem_post(sem);
        }
    }
}

ZkClient::ZkClient()
    : m_zhandle(nullptr)
{
}

ZkClient::~ZkClient()
{
    if (m_zhandle != nullptr)
    {
        zookeeper_close(m_zhandle); // 关闭句柄，释放资源
    }
}

void ZkClient::Start()
{
    std::string ip = MprpcApplication::GetInstance().GetConfig().load("zookeeperip");
    std::string port = MprpcApplication::GetInstance().GetConfig().load("zookeeperport");
    std::string host = ip + ":" + port;

    /**
     * zookeeper_mt：多线程版本
     * zookeeper的api客户端程序提供了三个线程：
     * api调用线程(当前线程，执行zookeeper_init)
     * 网络IO线程  专门另起一个线程做网络IO，底层是poll，客户端程序，不需要做到高并发
     * watcher回调线程
     */
    m_zhandle = zookeeper_init(host.c_str(), global_watcher, 30000, nullptr, nullptr, 0);

    if (m_zhandle == nullptr) // 这里空不空只代表句柄内存开辟是否成功
    {
        std::cout << "zookeeper_init error" << std::endl;
        exit(EXIT_FAILURE);
    }

    sem_t sem;
    sem_init(&sem, 0, 0);
    zoo_set_context(m_zhandle, &sem);

    sem_wait(&sem);
    std::cout << "zookeeper_init success" << std::endl;
}

void ZkClient::Create(const char *path, const char *data, int datalen, int state)
{
    char path_buffer[128];
    int bufferlen = sizeof(path_buffer);
    int flag;
    flag = zoo_exists(m_zhandle, path, 0, nullptr); // 查看节点是否存在
    if (flag == ZNONODE)                            // 节点不存在
    {
        // 根据指定的参数创建znode节点
        flag = zoo_create(m_zhandle, path, data, datalen, &ZOO_OPEN_ACL_UNSAFE, state, path_buffer, bufferlen);
        if (flag == ZOK)
        {
            std::cout << "znode create success ... path:" << path << std::endl;
        }
        else
        {
            std::cout << "flag:" << flag << std::endl;
            std::cout << "znode create error ... path:" << path << std::endl;
            exit(EXIT_FAILURE);
        }
    }
}

std::string ZkClient::GetData(const char *path)
{
    char buffer[64] = {0};
    int bufferlen = sizeof(buffer);
    int flag = zoo_get(m_zhandle, path, 0, buffer, &bufferlen, nullptr);
    if (flag != ZOK)
    {
        std::cout << "get znode error... path:" << path << std::endl;
        return "";
    }
    else
    {
        return buffer;
    }
}
