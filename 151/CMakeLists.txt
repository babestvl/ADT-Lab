cmake_minimum_required(VERSION 3.6)
project(151)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 151.cpp)
add_executable(151 ${SOURCE_FILES})