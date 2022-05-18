cmake_minimum_required (VERSION 3.8)
project (koQTest)

add_executable(project project.cpp)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(googletest)

set(Headers
    project.hpp
)
set(Sources
    project.cpp
)

add_library(koQTest STATIC ${Sources} ${Headers})

add_subdirectory(test)