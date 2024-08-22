#include <iostream>
#include <string>
#include <vector>

#include "friend.pb.h"
#include "mprpcapplication.h"
#include "logger.h"

class FriendService : public mprpc::FriendServiceRpc
{
public:
    // 远程需要实现的业务逻辑
    std::vector<std::string> GetFriendList(uint32_t userid)
    {
        std::cout << "do GetFriendList service! userid:" << userid << std::endl;
        std::vector<std::string> vec{"gao yang", "wang wu", "li gui", "a da xi wa"};

        return vec;
    }

    // 重写基类方法
    void GetFriendList(::google::protobuf::RpcController *controller,
                       const ::mprpc::GetFriendListRequest *request,
                       ::mprpc::GetFriendListResponse *response,
                       ::google::protobuf::Closure *done) override
    {
        // 取出数据
        uint32_t userid = request->userid();

        // 执行本地业务
        std::vector<std::string> friendList = GetFriendList(userid);

        // 将执行完本地业务的数据写入response
        mprpc::ResultCode *code = response->mutable_result();
        code->set_errcode(0);
        code->set_errmsg("");
        for (const std::string &name : friendList) // 将数组数据写入response
        {
            std::string *p = response->add_friends();
            *p = name;
        }

        done->Run();
    }

private:
};

int main(int argc, char **argv)
{
    // 调用框架的初始化操作
    MprpcApplication::Init(argc, argv);

    // porvider是一个rpc网络服务对象。  把FriendService对象发布到rpc节点上
    RpcProvider provider;
    provider.NotifyService(new FriendService());

    // 启动一个rpc服务发布节点  Run以后，进程进入阻塞状态，等待远程的rpc调用请求
    provider.Run();

    return 0;
}