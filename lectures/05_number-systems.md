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



