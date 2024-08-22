#include <iostream>

#include "mprpcapplication.h"
#include "friend.pb.h"

int main(int argc, char **argv)
{
    MprpcApplication::Init(argc, argv);

    mprpc::FriendServiceRpc_Stub stub(new MprpcChannel());

    // rpc方法的请求参数
    mprpc::GetFriendListRequest request;
    request.set_userid(1000);

    // rpc方法的响应
    mprpc::GetFriendListResponse response;

    // 发起rpc调用
    MprpcController controller;
    stub.GetFriendList(&controller, &request, &response, nullptr);

    // 一次rpc调用完成，读调用的结果
    if (controller.Failed())
    {
        std::cout << controller.ErrorText() << std::endl;
    }
    else
    {
        if (response.result().errcode() == 0)
        {
            std::cout << "rpc GetFriendList response success" << std::endl;
            int size = response.friends_size();
            for (int i = 0; i < size; i++)
            {
                std::cout << "index:" << i + 1 << " name:" << response.friends(i) << std::endl;
            }
        }
        else
        {
            std::cout << "rpc GetFriendList response error:" << response.result().errmsg() << std::endl;
        }
    }
}