#include<stdio.h>

// C Program to calculate weighted avergage of inputs
// @psrth, 18.12.20

void main()
{
 float n1, n2; // declaring float nums
 int w1, w2; // declaring int weights

 
 // user IO

 printf("Enter num 1: ");
 scanf("%f", &n1);

 printf("Enter weight 1: ");
 scanf("%d", &w1);

 printf("Enter num 2: ");
 scanf("%f", &n2);

 printf("Enter weight 2: ");
 scanf("%d", &w2);


 int t_weight = w1 + w2; // total weight
 float t_sum = (n1*w1) + (n2*w2); // total sum = summation(num_i*weight_i)
 
 float weight_avg = t_sum/t_weight; // computing weighted average

 printf("WEIGHTED AVERAGE: %f\n", weight_avg); // output stream
}
