#pragma once
#include <unordered_map>
#include <string>

// 框架读取配置文件类
// rpcserverip rpcserverport zookeeperip zookeeperport
class MprpcConfig
{
public:
    // 负责解析加载的配置文件
    void loadConfigFile(const std::string& config_file);
    //查询配置项信息
    std::string load(const std::string& key);

private:
    std::unordered_map<std::string, std::string> m_configMap;

    //去掉字符串前后的空格
    void trim(std::string& src_buf);
};