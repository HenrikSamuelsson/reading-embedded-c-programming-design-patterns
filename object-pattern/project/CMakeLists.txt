cmake_minimum_required(VERSION 3.0.0)
project(object-pattern VERSION 0.1.0)

include(CTest)
enable_testing()

set (CMAKE_CXX_STANDARD 11)

add_executable(object-pattern 
    main.c 
    example_object.c
    example_object.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
