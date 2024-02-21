cmake_minimum_required(VERSION 3.27)
project(TestingCTest)

set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
add_executable(${PROJECT_NAME} main.cpp)

add_test(Test_0, "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}" "0")
add_test(Test_1, "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}" "1")
