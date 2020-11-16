# Lecture 05 — Algorithm and Psuedocodes

## Steps of Programming Practices
1. Requirements
2. Creating a flow chart
**3. Creating algorithms**
4. Writing code
5. Debugging
6. Documentation
7. Deployment

## What are algorithms?
In mathematics and computer science, an algorithm is a finite sequence of well-defined, computer-implementable instructions, typically to solve a class of problems or to perform a computation.

### Programming Logic Constructs
**1. Imperative Statements:** actions
**2. Conditional Statements:** decision-making
**3. Iterative Statments:** repitition/loops

### Write an algorithm to check whether a number is prime or not
1. Start
2. Declare i variable is equal to 2, flag is equal to 0
3. Input a number n from user
4. If n is greater than or equal to i
    4.1 divide n by i
    4.2 if the remainder is 0
        4.2.1 increment flag by 1
    4.3 increment i by 1
5. Go to step 4
6. if flag is equal to 0, go to step 9.
7. print "IT IS NOT A PRIME NUMBER."
8. Go to step 10 
9. Print "IT IS NOT A PRIME NUMBER."
10. End


## What is psuedocode?
In computer science, pseudocode is a plain language description of the steps in an algorithm or another system. Pseudocode often uses structural conventions of a normal programming language, but is intended for human reading rather than machine reading.

### Write psuedocode to sum all numbers till 'n'
```
SumToN()
Begin
    Read: n;
    Set sum = 0;
    Set i = 1;
    while (i<=n) do
        Set sum = sum + i;
        Set i = i + 1;
    endwhile
    Print sum;
```