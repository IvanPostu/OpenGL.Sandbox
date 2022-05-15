## Build:

``` bash

# Prepare folder structure
$ cmake -E make_directory build build/Debug build/Release


# Generate project for Debig
$ cmake -E chdir build/Debug cmake ../.. -Dtest=ON -DCMAKE_BUILD_TYPE=Debug

# Build project
$ cmake --build build/Debug --config Debug

# Clean project
$ cmake --build build --target clean

# RunTests: 
$ cmake -E chdir build ctest --verbose



#External lib was added using
$ git submodule add https://github.com/glfw/glfw.git external/glfw

#usefull command
$ git submodule update --init --recursive

```