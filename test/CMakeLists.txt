add_executable(turkish_tests tests.cpp ../functions.cpp)
target_link_libraries(turkish_tests gtest_main)

target_include_directories(turkish_tests PRIVATE ..)