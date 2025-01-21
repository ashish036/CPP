# GCC Compiler
A GCC compiler is a software that translates C++ code (source code) into machine code (binary instructions) that the computer's processor can execute. 

``` shell
    # Commands to compile
    g++ ./Problems/01_triplets.cpp -o program -std=c++20
    clang++ ./Problems/01_triplets.cpp -o program -std=c++20
```

### Steps a compiler generally performs
## Preprocessing
    - Handles directives like #include and #define
    - Expands macros and includes headers files
## Compilation
    - Translates C++ code into intermediate assembly code specific to the system architecture
## Assembly
    - Converts assembly code into machine code
## Linking
    - Combines object files and external libraries into a single executable

## Compiler vs Interpreter
 Compiler translates the entire code before execution, whereas Interpreter translates and executes the program line by line
