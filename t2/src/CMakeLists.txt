add_executable(hello main.c)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
message("binary dir " ${PROJECT_BINARY_DIR})
message("source dir " ${PROJECT_SOURCE_DIR})