cmake_minimum_required(VERSION 3.10)

# set the project name
project(Header_Functions)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB functions.cpp)

add_library(functions STATIC ${SOURCE_LIB})

# add the executable
add_executable(main ${SOURCE_EXE})

target_link_libraries(main functions)
