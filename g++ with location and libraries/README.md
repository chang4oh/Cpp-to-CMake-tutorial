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

## Code

Compiling and linking separately is better for large projects  
for incremental build, modularity, code organization

```
// this compiles
g++ -I include -c src/math_utils.cpp -o build/math_utils.o
g++ -I include -c src/main.cpp -o build/main.o
// this links
g++ build/main.o build/math_utils.o -o build/program
// execute the program
./build/program
add: 8
multiply: 15
```

**Note**:  
If you see red line on multiple lines on multiple lines of code relating to  
import header and its functions that is not to worry about
