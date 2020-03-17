# 打印当前目录
message("测试工程当前目录: "  ${CMAKE_CURRENT_SOURCE_DIR})

# 查找 GTest 库
find_package(GTest REQUIRED)

# 需包含的头文件
include_directories(
    ${PROJECT_SOURCE_DIR}
    ${GTEST_INCLUDE_DIRS}    # GTest 的头文件
    /usr/include
)

# 需包含的库文件
link_directories(
    ${PROJECT_BINARY_DIR}/lib
)

#查找当前目录下的所有源文件将名称保存到 DIR_SRC_TESTS 变量
aux_source_directory(. DIR_SRC_TESTS)

add_executable(TestArabicToRomanNumeralsConverter ${DIR_SRC_TESTS})

# 链接测试库
target_link_libraries(TestArabicToRomanNumeralsConverter
    ${GTEST_BOTH_LIBRARIES}
    pthread
    libArabicToRomanNumeralsConverter.a)

