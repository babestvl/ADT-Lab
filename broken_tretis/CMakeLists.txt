cmake_minimum_required(VERSION 3.6)
project(broken_tretis)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(broken_tretis ${SOURCE_FILES})