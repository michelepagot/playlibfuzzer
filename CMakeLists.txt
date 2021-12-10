project(sayhello)
cmake_minimum_required(VERSION 3.4)

option(TEST_FUZZY "Enable the build of the fuzzer" OFF)
if(${TEST_FUZZY})
  add_definitions("-DBUILD_FUZZER")
endif()
add_executable(sayhello main.c greeting.c)