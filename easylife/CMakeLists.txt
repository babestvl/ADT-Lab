cmake_minimum_required(VERSION 3.6)
project(easylife)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(easylife ${SOURCE_FILES})