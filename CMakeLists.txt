cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(pong VERSION 1.0)
find_package(raylib 2 REQUIRED raylib)
add_executable(pong pong.cpp)
target_link_libraries(pong PUBLIC raylib)