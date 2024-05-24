cmake_minimum_required(VERSION 3.21)
project(design_pattern)

set(CMAKE_CXX_STANDARD 17)


add_executable(observer observer/main.cpp)

add_executable(Singleton Singleton/Singleton.cpp)
add_executable(main main.cpp)