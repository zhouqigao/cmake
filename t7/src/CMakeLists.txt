set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(glog_test glog_test.cpp GlogWrapper.cpp)


include_directories(${PROJECT_SOURCE_DIR}/include)
message("==before find pkg")
find_package(GLOG)
message("==after find pkg")

if(GLOG_FOUND)
  target_link_libraries(glog_test ${GLOG_LIBRARY})
endif(GLOG_FOUND)