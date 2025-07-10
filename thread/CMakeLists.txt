cmake_minimum_required(VERSION 3.16)

project(thread LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(thread main.cpp
    queue.h queue.cpp client.h client.cpp server.h server.cpp)

include(GNUInstallDirs)
install(TARGETS thread
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
