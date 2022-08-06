## Build:

``` bash

$ ProjectName="SandBox.Richard"

# Prepare folder structure
$ cmake -E make_directory "build/$ProjectName/Debug" "build/$ProjectName/Release"


# Generate project for Debug
$ cmake -E chdir "build/$ProjectName/Debug" cmake "../../../internal/$ProjectName" -Dtest=ON -DCMAKE_BUILD_TYPE=Debug

# Build project
$ cmake --build "build/$ProjectName/Debug" --config Debug

# Clean project
$ cmake --build "build/$ProjectName/Debug" --target clean

# RunTests: 
$ cmake -E chdir "build/$ProjectName/Debug" ctest --verbose


#External lib was added using
$ git submodule add [-b branchMame] https://github.com/glfw/glfw.git external/glfw

#usefull command
$ git submodule update --init --recursive

# Generate glad sources from project
$ python3 -m glad --help
$ python3 -m glad --out-path '../gladfolder' --generator 'c'

```