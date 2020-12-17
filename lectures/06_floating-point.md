# Lecture 06 — Floating Point Number Representation

## Fixed Point Representation
We define a fixed-point number by *implicitly* fixing the binary point at a numerical position.  
For this, we require two parameters:  
1. **Width** of the number representation (w)
2. **Binary Point Position** of the decimal (b)  

Therefore, we represent `1110 1101` in the `<8,3>` representation as `111.01101`.  

However, this method has it's shortcomings:
- same numbers can get represented differently based on the system being used
- no fixed position of the decimal point
- loss of precision can creep in

## Floating Point Representation
We use the [**IEEE 754**](https://en.wikipedia.org/wiki/IEEE_754) Standard to represent floating point numbers.  

### Theory

There are three important pieces of information we need:  

1. Sign of the Number (s)  
The MSB represents the signed bit and stores the sign of the number. 1 is for negative sign, 0 is for positive sign.  

2. Signed Exponent (e)  
The next 8 bits are used to store the value of the signed exponent — we use excess127 representation. For power 6, e = 133. The reason behind using excess127 representation is so that we can naturally order the values stored in the exponent field. (read more below)  

3. Mantissa/Significant Value (m)  
Stores the binary significand after the process of normalisation has occurred.  

### Some Important Notes

**Float** — IEEE 32 bit single precision format
**Double** — IEEE 64 bit double precision format  

**Why excess127 representation?**  
![exc](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/exc.png)  


### How do we convert numbers to IEEE format?
1. Convert your decimal integer into a binary representation of form `X.Y`
2. Adjust the binary number into the 'scientific' notation, where the number takes the form `1.M * 2^e`
3. Note down the values of **s, m** and **e.**
4. IEEE Notation is: `S | EEEEEEEE | MMMMMMMMMM......`  

Vice-versa for IEEE -> decimal. *Extensively* practice conversions between these formats to get used to the concept.  


### Reading Material
- Refer to Dr. Lowery's website [here](http://sandbox.mc.edu/~bennet/cs110/flt/) in case this markdown isn't extensive enough.
- Solve the assignment given by Pratik sir in class.



