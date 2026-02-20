cmake_minimum_required(VERSION 3.16)

project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(program
    src/main.cpp
    src/math_utils.cpp
)

target_include_directories(program PRIVATE include)
