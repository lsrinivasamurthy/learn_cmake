cmake_minimum_required(VERSION 3.27)
project(Hello_World_Output)

set(CMAKE_CXX_STANDARD 17)

set(OSBitness 32)  #First assume as 32 bit
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif ()

#set (FullOutputDir "${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OSBitness}/${CMAKE_BUILD_TYPE}")
set(FullOutputDir "${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OSBitness}/${CMAKE_BUILD_TYPE}")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${FullOutputDir}")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${FullOutputDir}")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${FullOutputDir}")

add_executable(Hello_World_Output main.cpp)
