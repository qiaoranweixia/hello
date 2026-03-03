cmake_minimum_required(VERSION 3.10)
project(SolutionProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加可执行文件
add_executable(solution main.cpp)

# 包含头文件目录（当前目录）
target_include_directories(solution PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})