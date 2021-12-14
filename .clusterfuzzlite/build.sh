#!/bin/bash -eu

# build project
# e.g.
# ./autogen.sh
# ./configure
# make -j$(nproc) all


cmake -B ${WORK}/build_fuzzy -DTEST_FUZZY=ON
cmake --build ${WORK}/build_fuzzy