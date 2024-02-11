cmake_minimum_required(VERSION 3.27)
project(SampleLib)

set(CMAKE_CXX_STANDARD 17)

set(OSBitness 32)  #First assume as 32 bit
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif ()

set(FullOutputDir "${CMAKE_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}${OSBitness}/${CMAKE_BUILD_TYPE}")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${FullOutputDir}/static_libs")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${FullOutputDir}")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${FullOutputDir}")

#add_library(console console.cpp)
add_library(console SHARED console.cpp)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} console)

