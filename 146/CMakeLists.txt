cmake_minimum_required(VERSION 3.6)
project(146)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 146.cpp)
add_executable(146 ${SOURCE_FILES})