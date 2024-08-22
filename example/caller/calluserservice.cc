#include <iostream>

#include "mprpcapplication.h"
#include "user.pb.h"
#include "mprpcchannel.h"

int main(int argc, char **argv)
{
    // 整个服务启动以后，想使用mprpc框架来享受rpc服务调用，一定要先调用框架的初始化函数
    // 框架Init是静态方法，只初始化一次
    MprpcApplication::Init(argc, argv);

    // 演示调用远程发布的rpc方法Login
    mprpc::UserServiceRpc_Stub stub(new MprpcChannel());
    // rpc方法的请求参数
    mprpc::LoginRequest request;
    request.set_name("zhang san");
    request.set_pwd("123456");
    // rpc方法的响应
    mprpc::LoginResponse response;
    // 发起rpc方法的调用  同步的rpc调用过程  Mprpc::callMethod
    stub.Login(nullptr, &request, &response, nullptr); // Login()底层调用RpcChannel的callMethod，callMethod集中做所有rpc方法调用的参数序列化和网络发送

    // 一次rpc调用完成，读调用的结果
    if (response.result().errcode() == 0)
    {
        std::cout << "rpc login response success:" << response.success() << std::endl;
    }
    else
    {
        std::cout << "rpc login response error:" << response.result().errmsg() << std::endl;
    }

    // 演示调用远程发布的rpc方法Register
    mprpc::RegisterRequest req;
    req.set_id(2000);
    req.set_name("li si");
    req.set_pwd("12345");

    mprpc::RegisterResponse rsp;
    stub.Register(nullptr, &req, &rsp, nullptr);

    if (rsp.result().errcode() == 0)
    {
        std::cout << "rpc login response success:" << rsp.success() << std::endl;
    }
    else
    {
        std::cout << "rpc login response error:" << rsp.result().errmsg() << std::endl;
    }

    return 0;
}