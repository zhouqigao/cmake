# CMake generated Testfile for 
# Source directory: /home/qigao/cmake/t2
# Build directory: /home/qigao/cmake/t2/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(mytest "/home/qigao/cmake/t2/build/bin/hello")
set_tests_properties(mytest PROPERTIES  _BACKTRACE_TRIPLES "/home/qigao/cmake/t2/CMakeLists.txt;4;ADD_TEST;/home/qigao/cmake/t2/CMakeLists.txt;0;")
subdirs("src")
