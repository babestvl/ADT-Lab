cmake_minimum_required(VERSION 3.6)
project(484)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 484.cpp)
add_executable(484 ${SOURCE_FILES})