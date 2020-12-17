#include<stdio.h>
#include<math.h> // math header file for power

// C program for custom number system
// @psrth, 18.12.20

void main()
{
 int base = 0; // variable initialisation with default values
 int user_input = 0;

 printf("Enter the base for the system: ");
 scanf("%d", &base); // user inputs base for number system

 printf("Enter a decimal: ");
 scanf("%d", &user_input); 

 int output = 0; // variable to store the converted number
 int i = 0; // variable to track position in number
 int user_input_copy = user_input;

 while (user_input > 0)
 {
  int rem = user_input%base; // remainder for that position
  output = output + (rem*pow(10, i)); // giving remainder appropriate tens value
  user_input = user_input/base; // updating user input
  i++; // updating position in converted number
 }
 
 printf("The conversion of %d in number system of base %d is equal to: %d\n", user_input_copy, base, output); 
 //printing result 
}
