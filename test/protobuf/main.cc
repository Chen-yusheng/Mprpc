#include "test.pb.h"

using namespace chenysh;

#include <iostream>
#include <string>

int main()
{
    GetFriendListsResponse rsp;
    ResultCode *rc = rsp.mutable_result();
    rc->set_errcode(0);

    User *user1 = rsp.add_friend_list();
    user1->set_name("zang san");
    user1->set_age(22);
    user1->set_sex(User::MAN);

    User *user2 = rsp.add_friend_list();
    user2->set_name("li si");
    user2->set_age(10);
    user2->set_sex(User::MAN);

    std::cout << rsp.friend_list_size() << std::endl;

    // 对象数据序列化
    std::string send_str;
    if (rsp.SerializeToString(&send_str))
    {
        std::cout << send_str << std::endl;
    }

    return 0;
}

int main1()
{
    // 封装了login请求对象的数据
    LoginRequest req;
    req.set_name("zhang san");
    req.set_pwd("123456");

    // 对象数据序列化
    std::string send_str;
    if (req.SerializeToString(&send_str))
    {
        std::cout << send_str << std::endl;
    }

    // 从send_str反序列化一个login请求对象
    LoginRequest reqB;
    if (reqB.ParseFromString(send_str))
    {
        std::cout << reqB.name() << " " << reqB.pwd() << std::endl;
    }

    return 0;
}