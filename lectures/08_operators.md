# Operators in C
Operators can be unary, binary or ternary. They are used to perform some operation (e.g., arithmetic, logical, bitwise, assignment) on operands.

## Order of Operations  
In an expression with multiple operators, the order of evaluation of operators is based on the precedence level.
Operators with the same precedence work by rules of associativity.  

![order](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/orderop.png)  

## Types of Operators
There are several important types of operators:  

### Arithmetic
- Used for performing arithmetic operations
- `{+, -. *, /, %}`
- `/, *, %` have higher precedence than `+, -`

```
int a = 31, b = 10;
float af = 31.0, bf = 10.0

a + b = 41
af + bf = 41.000000

a - b = 21
af - bf = 21.000000

a * b = 310
af * bf = 310.000000

a / b = 3
af / bf = 3.100000

a % b = 1
af % bf = NOT VALID
```  
**Note: modulus operation does not support float**

### Unary Arithmetic
| Expression (int a = 5) | Result|
|---|---|
| ++a | 6 |
| a++ | 5 |
| --a | 4 |
| a-- | 5 | 

**Prefix:** change value, then use   
**Postfix:** use, then change value

### Relational Operators
**Returns a boolean value (1 true, 0 false)** // same precedence, L->R  

`a == b` checks whether a is equal to b  
`a != b` checks whether a is not equal to b  
`a < b` checks whether a is less than b  
`a > b` checks whether a is greater than b  
`a <= b` checks whether a is less than equal to b  
`a >= b` checks whether a is greater than equal to b

### Logical Operators
**Returns a boolean value (1 true, 0 false)** // same precedence, L->R  

`expr1 && expr2` Logical AND. Returns true when both operands are non-zero (true)  
`expr1 || expr2` Logical OR. Returns true when at least one of the operand is non-zero (true)  
`!(expr)` Logical NOT. Returns true only if the operand is zero (false), and vice versa

### Bitwise Operator
Performs operation at a bit level. Represent the number in binary and compare individual bits.  

| Operation | Significance |
| --- | --- |
| `a or b` | Bitwise OR (if either bit is 1) |
| `a & b` | Bitwise AND (both bits are 1) |
| `a ^ b` | Bitwise XOR (only one bit is 1) |
| `~a` | Bitwise NOT (reverses the bits) |  

![bit1](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/bit1.png)  
![bit2](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/bit2.png)  
![bit3](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/bit3.png)  


### Assignment Operator
upates the value of the operand.
`+=, *=, -=, /=, &=`  

### sizeof() Operator
- Used to determine the size of an entity – variable, constant, expression, string, etc.  
- Return type (number of bytes) is an unsigned integral constant.
- On gcc, it is unsigned long int; so, use `%lu` as a conversion specifier in `printf()`.

### Comma Operator
`,` has the lowest precedence – used in for loops, variable declaration/initialisation. 

## Short Circuiting in C
A short circuit in logic is when it is known for sure that an entire complex condition is either true or false before the evaluation of whole expression. Mainly seen in case of expressions having logical AND(&&) or OR(||).  

In simpler terms, if `A op B`, and evaluation of A tells us what the expression will be, the C compiler will not compile the rest of the expression.  

**Practice Questions**
```
int a = 0, b = 3;
int I = a++ && ++b; printf(“%d %d %d”, a, b, I);
```
**O/P:** 1, 3, 0  


```
int a = 0, b = 3;
int I = ++a && ++b; printf(“%d %d %d”, a, b, I);
```
**O/P:** 1, 4, 1  


```
a = 0, b = 3;
int I = ++b || ++a; printf(“%d %d %d”, a, b, I);
```
**O/P:** 0, 4, 1  


```
a = 0, b = 3;
int I = a++ || ++b; printf(“%d %d %d”, a, b, I);
```
**O/P:** 1, 4, 1  


```
int a = 1, b = 1;
int c = a || --b;
int d = a-- && --b;
printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
```
**O/P:** a = 0, b = 0, c = 1, d = 0  


```
int i=-1, j=-1, k=0, l=2, m;
m = i++ && j++ && k++ || l++;
printf("i = %d, j = %d, k = %d, l = %d, m = %d",i,j,k,l,m);
```
**O/P:** i = 0, j = 0, k = 1, l = 3, m = 1  


```
int i=0, j=-1, k=0, l=2, m;
m = i++ && j++ && k++ || l++;
printf("i = %d, j = %d, k = %d, l = %d, m = %d",i,j,k,l,m);
```
**O/P:** i = 1, j = -1, k = 0, l = 3, m = 1  



### Note: for some reason, the printf() statement is evaluated from right to left — so if you have any operations there, make sure you follow that order (explanation: stack)