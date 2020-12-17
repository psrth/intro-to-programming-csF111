#include<stdio.h>

// program to read integer and return years/months/days
// also, written in vim for flex

int main()
{
 int user_input = 0;
 
 printf("Enter the number of days: ");
 scanf("%d", &user_input);

 int years, months, days;

 years = user_input/365;
 months = (user_input%365)/30;
 days = (user_input%365)%30;

 printf("%d days is equal to %d years, %d months, and %d days.", user_input, years, months, days);

 return 0;
}

// INPUT/OUTPUT VERIFICATION
// Parth@psrth-mac-air lab-03 % gcc -o days q4_days.c 
// Parth@psrth-mac-air lab-03 % ./days
// Enter the number of days: 403
// 403 days is equal to 1 years, 1 months, and 8 days.%    
