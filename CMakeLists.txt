cmake_minimum_required(VERSION 3.16)
project(spcheck)

set(CMAKE_CXX_STANDARD 17)

#headers
include_directories(inc)
#txt data folder src->bin
file(COPY data DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(spcheck src/main.cpp inc/dictionary.h inc/error.h)