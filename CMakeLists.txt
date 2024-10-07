cmake_minimum_required(VERSION 3.20)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

project(clang-p2996-test
    LANGUAGES CXX
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -freflection-latest -std=c++26")

add_executable(${PROJECT_NAME} Img.cpp )

