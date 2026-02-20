# CMAKE Tutorial

using CMake as system builder generator and Make as system builder
meaning Cmake generates configuration for Make to use and build Makefiles

## software

1. VSCode
2. C++ extension
3. CMake version 3.27 or greater

## Structure

```
project/
│
├── include/ # Header files
│ └── math_utils.h
│
├── src/ # Source files
│ ├── math_utils.cpp
│ └── main.cpp
│
└── build/ # Compiled object files & executable
```

## steps

1. create CMakeLists.txt on a root folder

```
cmake_minimum_required # Minimum version of CMake required.

project(MyProject) # Names your project.

set(CMAKE_CXX_STANDARD 17) # Tells CMake to use C++17.

include_directories(include) # Same idea as: g++ -I include

add_executable # This replaces: g++ main.cpp math_utils.cpp -o program
```

2. follow the structure
3. build the project

```
mkdir build
cd build
cmake ..
make
```

In case there is error during the build, you can remove the build folder  
and start over the step

```
// on root directory
rm -rf build

```

4. run the program

```
// if inside the build/
./program
// result
add: 8
multiply: 15

// if on root directory
./build/program
// result
add: 8
multiply: 15
```

## Version

```
cmake --version
Command 'cmake' not found, but can be installed with:
sudo snap install cmake  # version 4.2.0, or
sudo apt  install cmake  # version 3.27.8-1build1                                    tutorial/CMake$ cmake --version
See 'snap info cmake' for additional versions.
```

I chose 3.27.8 since the latest version is still on testing phase

```
sudo snap install cmake
[sudo] password for user: // enter password
```

**Key Considerations**:
**CMake 4.2.0 (Latest)**: Offers improvements like the FASTBuild generator,  
better ExternalProject environment handling, and new cmake_language(TRACE)  
capabilities. It is generally better for current development.

**CMake 3.27.8 (Older)**: Supports older, deprecated features (like exec_program) that were removed in 4.0. It is suitable for projects that have not updated their CMake policies.
Compatibility: CMake is backward compatible, but 4.x has officially dropped support for policies older than 3.5, which may cause errors in very old projects.
