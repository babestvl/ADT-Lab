cmake_minimum_required(VERSION 3.6)
project(connected_components)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(connected_components ${SOURCE_FILES})