cmake_minimum_required(VERSION 3.27)
project(console)

set(CMAKE_CXX_STANDARD 17)

set(ProjectType STATIC) # options are STATIC and SHARED

set(SourceFiles src/Input.cpp src/Output.cpp)

include_directories(include)
add_library(${PROJECT_NAME} ${ProjectType} ${SourceFiles})
