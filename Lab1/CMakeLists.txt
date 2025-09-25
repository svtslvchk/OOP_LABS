cmake_minimum_required(VERSION 3.15)
project(TurkishNumberLab VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(turkish_app src/main.cpp src/functions.cpp)

add_executable(turkish_tests test/tests.cpp src/functions.cpp)
target_link_libraries(turkish_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(turkish_tests)