cmake_minimum_required(VERSION 3.27)
project(Pre_Post_Build)

set(CMAKE_CXX_STANDARD 17)

set(OSBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif ()

set(FullOutputDir "${CMAKE_SOURCE_DIR}/bin")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${FullOutputDir}/static_libs")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${FullOutputDir}")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${FullOutputDir}")


add_executable(${PROJECT_NAME} main.cpp)

add_custom_command(TARGET ${PROJECT_NAME}  POST_BUILD
   COMMAND mv "./bin/Pre_Post_Build" "${CMAKE_SOURCE_DIR}"
   WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
   )

#add_custom_command(TARGET ${PROJECT_NAME}  PRE_BUILD
# COMMAND mv "./bin/Pre_Post_Build" "${CMAKE_SOURCE_DIR}"
# WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)
