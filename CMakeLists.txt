cmake_minimum_required(VERSION 3.28)
project(maze_backtracking_with_stack)

set(CMAKE_CXX_STANDARD 17)

add_executable(maze_backtracking_with_stack main.cpp
        include/Coordinate.h
        src/Coordinate.cpp)

IF (WIN32)
    target_link_libraries(maze_backtracking_with_stack -static)
ENDIF ()