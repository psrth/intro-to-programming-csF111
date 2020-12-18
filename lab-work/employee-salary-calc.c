#include<stdio.h>

// C Program to calculate the salary for an employee
// @psrth, 18.12.20

void main()
{
 const float base_salary = 1500.00; // base salary
 float bonus = 200.00; // bonus per computer sold
 float commission = 0.02; // commission rate on monthly sales
 
 float comp_price = 0.0; // selling price of a computer
 int comp_num = 0; // number of computers

 printf("Enter number of computers sold: ");
 scanf("%d", &comp_num);

 printf("Enter sales price of computers: ");
 scanf("%f", &comp_price);

 float monthly_sales = comp_num*comp_price; // computing monthly sales
 float salary = base_salary + (bonus*comp_num) + (commission*monthly_sales); 

 // salary = base salary + total bonuses + total comission 
 
 printf("The salary is %f\n", salary); // output stream
}
