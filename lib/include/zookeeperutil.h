#pragma once

#include <string>
#include <zookeeper/zookeeper.h>

// 封装zk客户端类
class ZkClient
{
public:
    ZkClient();
    ~ZkClient();

    // zkclient启动连接zkserver
    void Start();
    // 在zkserver上根据指定的path创建znode节点
    void Create(const char *path, // znode节点路径
                const char *data, // znode节点数据
                int datalen,      // 数据长度
                int state = 0);   // 节点是永久性节点还是临时性节点，默认0表示永久性节点
    //根据参数指定的znode节点路径，获取znode节点的值(znode节点就是存值的，默认大小为1M)
    std::string GetData(const char *path);

private:
    // zk的客户端句柄
    zhandle_t *m_zhandle;
};