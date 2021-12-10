project(sayhello)
cmake_minimum_required(VERSION 3.4)

option(TEST_FUZZY "Enable the build of the fuzzer" OFF)
if(${TEST_FUZZY})
  add_definitions("-DBUILD_FUZZER")
endif()
add_executable(sayhello main.c greeting.c)

if(${TEST_FUZZY})
  target_compile_options(sayhello
            PRIVATE $<$<C_COMPILER_ID:Clang>:-g -O1 -fsanitize=fuzzer>
            )

  target_link_libraries(sayhello
            PRIVATE $<$<C_COMPILER_ID:Clang>:-fsanitize=fuzzer>
            )
endif()