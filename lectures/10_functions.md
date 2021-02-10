# Functions in C
A function is a modular portion of code to handle a specfic function. It is used in making complex tasks manageable by breaking it into smaller chunks. Involves processing information received via an input and returning an output (not necessarily, but we'll get into that later).

## Function Syntax
```
return-type function-name (type-name argument pairs) {
    function body;
}
```

## Rules of function declaration/definition
1. Name of the function in function definition must exactly match with the name used in the function prototype.  
2. The number of arguments used in function definition must exactly match the number of parameters mentioned in the function prototype.  
3. The type of each argument in function definition must exactly match the type of each corresponding parameter in function prototype.  
4. The return type in function definition must exactly match the return type mentioned in the function prototype. 


## Function Program
```
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

## Advantages and Disadvantages of Functions
| Advantages | Disadvantages |
| --- | --- |
| 1. Code Reusability | 1. Reduced execution speed |
| 2. Reduced Coding time | |
| 3. Easier to Debug | |
| 4. Modular | |
| 5. Intuitive | |

# Recursive Functions