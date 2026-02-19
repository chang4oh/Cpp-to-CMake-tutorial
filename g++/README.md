# G++

When compiling and linking to an executable  
I ran into the trouble on not getting any executable  
which the linking part failed  
I was running on gitbash on visual studio  
after switching to WSL (get it on Extensions)  
it worked without problem

If needing to work file on C, just change command to gcc
and file to .c instead of .cpp

### Structure

{repository}/g++/ main, main.c, README.md

### On WSL

```
g++ main.c -o main

ls
main main.c

./main
Hello World
```

### GNU compiler version

```
g++ --version
g++ (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
