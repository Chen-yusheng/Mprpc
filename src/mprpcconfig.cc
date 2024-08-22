#include "mprpcconfig.h"
#include <iostream>

void MprpcConfig::loadConfigFile(const std::string &config_file)
{
    FILE *pf = fopen(config_file.c_str(), "r");
    if (nullptr == pf)
    {
        std::cout << config_file << "is not exist" << std::endl;
        exit(EXIT_FAILURE);
    }

    while (!feof(pf))
    {
        char buf[512] = {0};
        fgets(buf, 512, pf);

        // 去掉字符串前面多余的空格
        std::string read_buf(buf);
        trim(read_buf);

        // 判断#的注释
        if (read_buf[0] == '#' || read_buf.empty())
        {
            continue;
        }

        // 解析配置项
        int idx = read_buf.find('=');
        if (idx == -1)
        {
            // 配置项不合法
            continue;
        }
        std::string key, value;
        key = read_buf.substr(0, idx);
        trim(key);
        int endidx = read_buf.find('\n', idx);
        value = read_buf.substr(idx + 1, endidx - idx - 1);
        trim(value);
        m_configMap.insert({key, value});
    }
}

std::string MprpcConfig::load(const std::string &key)
{
    if (m_configMap.find(key) != m_configMap.end())
        return m_configMap[key];
    return "";
}

void MprpcConfig::trim(std::string &src_buf)
{
    int idx = src_buf.find_first_not_of(' ');
    if (idx != -1)
    {
        // 说明字符串前面有空格
        src_buf = src_buf.substr(idx, src_buf.size() - idx);
    }
    // 去掉字符串后面多余的空格
    idx = src_buf.find_last_not_of(' ');
    if (idx != -1)
    {
        // 说明字符串后面有空格
        src_buf = src_buf.substr(0, idx + 1);
    }
}
