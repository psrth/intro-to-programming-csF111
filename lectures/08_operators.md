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
| `a | b` | Bitwise OR (if either bit is 1) |
| `a & b` | Bitwise AND (both bits are 1) |
| `a ^ b` | Bitwise XOR (only one bit is 1) |
| `~a` | Bitwise NOT (reverses the bits) |  

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




