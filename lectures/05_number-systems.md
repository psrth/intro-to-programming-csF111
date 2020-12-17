# Lecture 05 — Number Systems

## Decimal Numbering System
The decimal numbering system, or the human system, has a **BASE 10**. Why 10? Because that's the number of fingers that we have.

## Binary Number System
This system has a **BASE 2.**  
A simple switch in boolean/binary systems can be represented by **ON 1** or **OFF 0.** Integrated circuits have billions of these switches for data processing, and just by manipulating these 2 states we can handle the computer's processing.  

For an `n` number of bits, we can represent decimal numbers upto:
| **Number of bits** | **Upper Limit of Decimal Representation** |
| --- | --- |
| 1 | 1 |
| 2 | 3 |
| 3 | 7 |
| 7 | 127 |
| 8 | 255 | 
| **n** | **2^n - 1** |  


### Decimal to Binary Conversion
Divide by 2 until you reach 1/0, marking the remainder at each stage. Reverse the order of remainders to obtain the binary representation.
![conversion](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/bindec.png)  

### Binary to Decimal Conversion
Raise 2 to the power of the place (starting from 0) if the bit is 1.  
For example,  
`10101 = 2^0 + 2^2 + 2^4 = 21`  

## Octal (8) and Hexa-decimal (16) Systems
Here, in case you'd ever need to convert between these elementary systems.
![conversion](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/num-sys.png)  


## Negative Binary Numbers
**Problem:** computers cannot handle any symbol apart from 0 or 1.  

### MSB Method of Representation
We use the principle of **Most Significant Bit (MSB)** in binary representation itself to show whether a number is postive or negative based on the value of the left-most bit.  
Positive Numbers: **MSB = 0**  
Negative Numbers: **MSB = 1**  

**Important Point:** We have to explicitly specify to the compiler whether a number is signed or unsigned in binary.  

### 1's Complement
Simple representation of a negative number by taking the complement of the postitive number.  
**Invert all 0s to 1s and vice-versa.**
| Number | Binary Representation |
| --- | --- |
| 15 | 0000 1111 |
| -15 | 1111 0000 | 

However, this representation is still not perfect — we run into the issue of multiple zeroes. (both 1111 1111 and 0000 0000 represent the same number according to the 1's complement method).  

### 2's Complement
Simple representation of a negative number by adding 1 to the complement of the postitive number.  
**Invert all 0s to 1s and vice-versa. Then add 1.**
| Number | Binary Representation |
| --- | --- |
| 15 | 0000 1111 |
| 15' | 1111 0000 | 
| 15'' | 1111 0001 |   




## Binary Arithmetic
Binary Arithmetic refers to the algebra of bits.  
**Binary Bit Addition**
| Expression | Result |
| --- | --- |
| 0 + 0 | 0 |
| 0 + 1 | 1 |
| 1 + 0 | 1 |
| 1 + 1 | 1 0 |  

**Binary Bit Subtraction**
| Expression | Result |
| --- | --- |
| 0 - 0 | 0 |
| 0 - 1 | 0 1 |
| 1 - 0 | 1 |
| 1 - 1 | 0 |  

*Crucially,* the important bits here are the CARRY and BORROW from addition and subtraction respectively.  

### Subtraction with 1's Complement
1. Write 1' of number to be subtracted
2. Add it to the first number
3. In case of a carry over — discard carry, add 1.
4. In case of no carry over — find 1' of the result and add negative sign.  

`7 - 4 => (0111 - 0100) => (0111 + 1011) => (1 0010) => (0011) => 3`  
`4 - 7 => (0100 - 0111) => (0100 + 1000) => (0 1100) => -(0011) => -3`  


### Subtraction with 2's Complement 
1. Write 2' of number to be subtracted
2. Add it to the first number
3. In case of a carry over — discard carry, this is the result.
4. In case of no carry over — find 2' of the result and add negative sign.  

`4 - 7 => (0100 - 0111) => (0100 + 1001) => (0 1101) => -(0011) => -3`  
`7 - 4 => (0111 - 0100) => (0111 + 1100) => (1 0011) => (0011) => 3`  


### Addition with 2's Complement
**Important:** ensure you have enough bits to store the sum — otherwise an overflow condition can break the computation.
![overflow](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/overflow.png)  



## Representing Real Numbers in Binary (X.Y)
The method for fractional parts of the number is *slightly* different. First, convert the **X** part of the decimal into binary as normal. For the fractional **Y** part, keep multiplying by 2 — until we reach the form 1.0 — stripping down the real coefficient (0/1) at each stage and appending it to **X'.**  

*Example:*  
`
 **(10.6875) = (1010.1011)**  

 X = 1010 (normal conversion)
 Y = 0.6875  
 
   = 1.3750
   = 0.7500
   = 1.5000
   = 1.0000
 
// Considering coeffcient of each term, we get Y = 1011
`  

For the vice-versa binary into decimal, simply use negative powers of 2 starting from -1 for places after the decimal point.







