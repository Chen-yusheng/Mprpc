#当前目录下所有源文件放入SRC_LIST
aux_source_directory(. SRC_LIST)

add_library(mprpc ${SRC_LIST})

# mprpc依赖于muduo
target_link_libraries(mprpc  muduo_net muduo_base pthread zookeeper_mt)