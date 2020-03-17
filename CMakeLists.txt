# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.1)

# 设置C++标准
set(CMAKE_CXX_STANDARD 14) 

# 项目信息
set (PROJECT_NAME FirstExampleForTDD)
project (${PROJECT_NAME})
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
set (LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

message("工程名: " ${PROJECT_NAME})
message("工程目录: " ${PROJECT_SOURCE_DIR})
message("编译后可执行程序目录: " ${EXECUTABLE_OUTPUT_PATH})
message("编译后库程序文件目录: " ${LIBRARY_OUTPUT_PATH})

ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(test)
