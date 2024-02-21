# Learning Activities


#1. Example project
#2. Include Directories
#3. Aggregated Headers
#4. Include Project Once
#5. Compiler Caveats
#6. use a List to include what and all projects required.
#7. Add Static/Shared Report.


cmake_minimum_required(VERSION 3.27)
project(SubFolderProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(console)
add_subdirectory(console)


message(STATUS "CMAKE_CURRENT_BINARY_DIR: ${CMAKE_CURRENT_BINARY_DIR}")

add_executable(${PROJECT_NAME} main.cpp)
#target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_BINARY_DIR}/console/libconsole.a)
target_link_libraries(${PROJECT_NAME} console)
