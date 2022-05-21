cmake_minimum_required(VERSION 3.18)

project(GeneratorPWPlemiona)

set(CMAKE_CXX_STANDARD 11)

#add_compile_options(-Wall -Wextra -pedantic -Werror)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  GeneratorPWPlemiona
  hello_test.cpp
  Tests.cpp
)
target_link_libraries(
  GeneratorPWPlemiona
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(GeneratorPWPlemiona)