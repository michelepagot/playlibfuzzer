#!/bin/bash -eu
cmake -B ${WORK}/build_fuzzy -DTEST_FUZZY=ON
cmake --build ${WORK}/build_fuzzy
mv ${WORK}/build_fuzzy/sayhello ${OUT}
echo "OUT:__${OUT}__"
ls -lai ${OUT}