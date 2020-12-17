#include<stdio.h>

int main()
{
 // variable declaration
 float a, b, prod;
 int x, y;

 // calculation 1
 printf("Enter value of a: ");
 scanf("%f", &a);
 printf("Enter value of b: ");
 scanf("%f", &b);
 prod = a*b;

 // calculation 2
 printf("Enter value of x and y: ");
 scanf("%d %d", &x, &y);
 
 // print final statements
 printf("Product of %f and %f is %f\n", a, b, prod);
 printf("Product of %d and %d is %d", x, y, x*y);

 return 0;
}

