cmake_minimum_required(VERSION 3.15)
project(exercise1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Exercise1 main.cpp
        ais2203_exercise1/main.cpp
        "ais2203_exercise1/Include/Person.h"
        "ais2203_exercise1/Include/Greet.h")
target_include_directories(main PUBLIC "${CMAKE_SOURCE_DIR}/Include")



