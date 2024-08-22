# set(SRC_LIST calluserservice.cc ../user.pb.cc)
set(SRC_LIST callfriendservice.cc ../friend.pb.cc)

add_executable(consumer ${SRC_LIST})

#需要链接自己实现的mprpc和google的protobuf
target_link_libraries(consumer mprpc protobuf)