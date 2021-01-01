# Lecture 06 — Computer Programming: Writing Code

## Compilation Process in C
Before the C program is transferred into an executable form, it passes through the following:

![compilation](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/c-comp.png)

**1. Pre-processor**
The source code is passed to the pre-processor, which expands the code by:
- expanding lines beginning with pre-processor directive `#`
- removing comments

**2. Compiler**
Checks the code for errors and then converts the pre-processed code into assembly code.

**3. Assembler**
Converts assembly code into object code.

**4. Linker**
Combines object code of library files and other files used by the program with our program's object code. The output of the linker is an executable file.



## Inside the C File

### Header Files
A directive to place the contents of the header file in the program.

For this case, we will use `#include <stdio.h>`. By including this header file, we are directing the C preprocessor to include contents of I/O in our program.


### What are functions?
A function is a block of code that can be called to execute a set of statements. Multiple programs can use the same function.

```
int add(int num1, int num2) {
   int sum;
   sum = num1 + num2;

    return sum;
}
```


### Adding Comments
Comments are integral to understanding a program and how it works.
Use `/* */`or `//` to comment something out.

