project(GlogTest)
cmake_minimum_required(VERSION 2.18)

# CMAKE_MODULE_PATH搭配find_package使用 / 或者使用include指令
include(cmake/FindGLOG.cmake)
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

add_subdirectory(src)