cmake_minimum_required(VERSION 3.20.0)

if (${TARGET} MATCHES "zephyr")
    find_package(Zephyr)
endif()

project(vcu)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)

if (NOT ${TARGET} MATCHES "zephyr")
    include(CTest)
    add_subdirectory($ENV{UNITY_PATH} unity)
    add_subdirectory(tests)

    message(STATUS "Tests added")
endif()
