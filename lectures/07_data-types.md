# Lecture 7 — Data Types in C

Data is the cornerstone on which computer programming rests. All computations, tasks, and methods that a computer program performs depend on interacting with tangible data and information.  

There are two main types of data:
1. Variables
2. Constants  


## Variables in C

### What are variables?
A variable is simply the **name given to a memory location.** A value is stored in this location and can be used and updated over the course of the program's runtime. We do this with the help of an **identifier**, which is a fancy term for the name used to access a variable.  

`int num;` here, the computer allocates a memory of size integer and we can access the value stored at this location by calling `num` anytime during the program's runtime.  

**Variable Naming Rules in C**
- names must begin with a letter or an underscore
- names are case-sensitive
- name may consist of letters/digits/underscores
- can NOT use existing keywords (words that have a special meaning to the compiler)  

### Using variables
Before we can use variables in our program, we need to first:  

1. Declare the variable (allocate space for it)  
`int sum; float area;`  
  
2. Initialise the variable (give it a value, else it is junk)  
`sum = 4 + 5; area = 3.14 * r * r`  

Note, these steps can be merged into one:  
`float area = 3.14 * r * r`  

## Data Types
C is a *typed* language — each data item has a type associated with it.  

| Data Classification | Examples |
| --- | --- |
| Fundamental | *int, float, etc.* |
| Derived | *arrays, pointers* |
| User-defined | *structures* |


