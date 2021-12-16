# playlibfuzzer
Run github action powered libfuzzer test

## give it a try
In order to test it locally you need a clang installation (I'm testing it with clang 13.0.0). Then it is just a matter of cloning it, create a BUILD folder and ...
```
cmake -GNinja ../playlibfuzzer -DTEST_FUZZY=ON -DCMAKE_C_COMPILER=$(which clang) -DCMAKE_CXX_COMPILER=$(which clang) && ninja
```
