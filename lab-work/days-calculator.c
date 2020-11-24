#include<stdio.h>
int main ()
{
int n, days, months, years;
printf("Enter number of days: ");
scanf("%d",&n);
years =  n / 365;
months = (n % 365) / 30;
days = (n % 365)%30;
printf("It is %d years, %d months, and %d days", years, months, days);
return 0;
}
