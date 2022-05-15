## Build:

``` bash

# Prepare project
$ cmake -E make_directory build
$ cmake -E chdir build cmake .. -Dtest=ON -DCMAKE_BUILD_TYPE=Debug

# Build project
$ cmake --build build --config Release|Debug

# Clean project
$ cmake --build build --target clean

# RunTests: 
$ cmake -E chdir build ctest --verbose

```