cmake_minimum_required(VERSION 3.12)
project(BubbleSort)
enable_testing()
add_subdirectory(googletest)
include_directories(googletest/include)
add_executable(BubbleSortTests test/BubbleSortTests.cpp)
add_library(BubbleSort src/BubbleSort.cpp)
target_link_libraries(BubbleSortTests PRIVATE gtest_main BubbleSort)
include(GoogleTest)
gtest_discover_tests(BubbleSortTests)