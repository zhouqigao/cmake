add_executable(main main.c)
#CMAKE_SOURCE_DIR PROJECT_SOURCE_DIR <projectname>_SOURCE_DIR
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#CMAKE_CURRENT_SOURCE_DIR当前处理的 CMakeLists.txt所在的路径
message("in:" ${CMAKE_CURRENT_SOURCE_DIR})

#添加非标准的共享库搜索路径
#LINK_DIRECTORIES(directory1 directory2 ...)

#先添加头文件
#include_directories(/usr/include/hello)
#export CMAKE_INCLUDE_PATH=/usr/include/hello
find_path(myHeader hello.h)
message(${myHeader})
if(myHeader)
  include_directories(${myHeader})
endif(myHeader)

#将目标文件（二进制或者库文件）链接到标准共享库搜索路径下的库文件
target_link_libraries(main hello)
