#!/bin/bash -eu

# build project
# e.g.
# ./autogen.sh
# ./configure
# make -j$(nproc) all


cmake -B ./build_fuzzy -DTEST_FUZZY=ON
cmake --build .