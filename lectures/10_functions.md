# Functions, Storage Scope, and Recursion
A function is a modular portion of code to handle a specfic function. It is used in making complex tasks manageable by breaking it into smaller chunks. Involves processing information received via an input and returning an output (not necessarily, but we'll get into that later).

## Functions in C
```
return-type function-name (type-name argument pairs) {
    function body;
}
```  
**Return Type:** int, double, float, *void*  
**Function Name:** any valid unused identifier  
**Type Name Argument Pair:** int num1, double pi  

### Function Declaration
`int sum (int, int);`  
**Used to tell the compiler about a function name and how to call the function.**  
> Not necessary with C99, but good practice

### Rules for Declaration
1. Name of the function in function definition must exactly match with the name used in the function prototype.  
2. The number of arguments used in function definition must exactly match the number of parameters mentioned in the function prototype.  
3. The type of each argument in function definition must exactly match the type of each corresponding parameter in function prototype.  
4. The return type in function definition must exactly match the return type mentioned in the function prototype. 

### Example of Function Usage
```c
#include<stdio.h>

// function declaration (prototype)
int sumOf(int, int);

int main(){
    printf("Enter two numbers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // function call
    printf("%d is the sum.", sumOf(num1, num2));

    return 0;
}

// function definition
int sumOf(int num1, int num2) {
    return num1+num2;
}
```

### Advantages and Disadvantages of Functions
| Advantages | Disadvantages |
| --- | --- |
| 1. Code Reusability | 1. Reduced execution speed |
| 2. Reduced Coding time | |
| 3. Easier to Debug | |
| 4. Modular | |
| 5. Intuitive | |

### Types of Arguments
**Formal Arguments** are the arguments present in the function prototype. On the other hand, **Actual Arguments** are the ones present in the function call.  
> Both have their own seperate memory.

## Scope and Storage Class of Variables

### Global and Local Variables + Scope
Let us examine scope using this code snippet:
```c
int x = 10; // this is a global variable, scope is global
int main() {
    int y = 10; // this is a variable local to main, scope is main
    for(int i = 1; i < 10; i++) {
        int z = 20; // this is a variable local to this loop, scope is {}
    }
}
```

### Variable Hiding
Higher-level values of a variable are over-ridden in C if reinitialised in a new codeblock. For example, with a global variable `int x = 10` and an inner loop variable `int x = 300`, the value printed inside the loop will be `300`.

## Storage Classes in C
![storage](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/storage-classes.png)
Represents the visibility and a location of a variable. It tells the:
• The variable’s scope: visibility of the variable, is inside the block { } in which it has been declared.
• The location where the variable will be stored.
• The initialized value of a variable.
• The lifetime of a variable.

## Recursive Functions