cmake_minimum_required(VERSION 3.29)
set(CMAKE_CXX_STANDART 20)
project(TusurTask1)

set(SOURCE_FILE main.cpp)
include_directories(classes)

add_executable(main ${SOURCE_FILE})
add_subdirectory(classes)
target_link_libraries(main classes)