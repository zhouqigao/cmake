PROJECT(NEWHELLO)
cmake_minimum_required(VERSION 3.20)
# 第二个参数：编译中间文件目录的重命名
ADD_SUBDIRECTORY(src)

# PROJECT_BINARY_DIR CMAKE_BINARY_DIR <projectname>_BINARY_DIR
message("project dir:" ${PROJECT_BINARY_DIR})
message("cmake dir:" ${CMAKE_BINARY_DIR})
message("newhello dir:" ${NEWHELLO_BINARY_DIR})
message("out:" ${CMAKE_CURRENT_SOURCE_DIR})

# SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

# cmake调用环境变量的方式/cmake 常用变量
MESSAGE(STATUS "home dir: $ENV{HOME}")
#foreach
foreach(each RANGE 5 15 3)
message(${each})  
endforeach(each )
