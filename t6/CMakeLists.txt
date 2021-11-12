PROJECT(HELLO)
cmake_minimum_required(VERSION 3.20)

message("== out CMakeLists.txt")
# 自定义的模块，用find_package指令
SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
# 第二个参数：编译中间文件目录的重命名
ADD_SUBDIRECTORY(src)