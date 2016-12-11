cmake_minimum_required(VERSION 3.6)
project(10502)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 10502.cpp)
add_executable(10502 ${SOURCE_FILES})