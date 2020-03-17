# 打印当前目录
message("源程序工程当前目录: "  ${CMAKE_CURRENT_SOURCE_DIR})

#查找当前目录下的所有源文件将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_library(ArabicToRomanNumeralsConverter ${DIR_SRCS})
add_executable(main ${DIR_SRCS})
