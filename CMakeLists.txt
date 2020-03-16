# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.1)

# 项目信息
project (FirstExampleForTDD)

# 查找 GTest 库
find_package(GTest REQUIRED)

# GTest 的头文件
include_directories(${GTEST_INCLUDE_DIRS})

# 设置C++标准
set(CMAKE_CXX_STANDARD 14) 

# 指定生成目标
add_executable(main main.cpp)

# 链接测试库
target_link_libraries(main
        ${GTEST_BOTH_LIBRARIES}
        pthread )
