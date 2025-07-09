cmake_minimum_required(VERSION 3.10)
project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app
    base.cpp
    client.cpp
    main.cpp
    server.cpp
    base.h
    client.h
    queue.h
    server.h
)

target_include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})