#include<stdio.h>

// C Program to calculate ASCII sum of input char
// @psrth, 18.12.20

void main()
{
 char input_a, input_b; // input type is char
 printf("Enter two characters: ");
 scanf("%c %c", &input_a, &input_b);
 printf("ASCII sum of %c (%d) + %c (%d) is: %d\n", input_a, input_a, input_b, input_b, input_a+input_b); // format-specifiers, implicit type casting in print
}
