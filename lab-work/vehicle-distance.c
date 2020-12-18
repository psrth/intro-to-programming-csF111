#include<stdio.h>
#include<math.h>

// C Program to calculate distance using Newton's Second Law
// @psrth, 18.12.20

void main()
{
 float distance = 0.0;
 int time = 0;
 int initial_velocity = 0;
 int acceleration = 0;
 
 printf("Enter initial velocity(u), acceleration(a), and time(t): \n");
 scanf("%d %d %d", &initial_velocity, &acceleration, &time);
 
 distance = (initial_velocity*time) + (acceleration*pow(time,2))/2;
 printf("Vehicle has travelled %f m.\n", distance);
}

// INPUT/OUTPUT
// Enter initial velocity(u), acceleration(a), and time(t): 
// 10 10 10
// Vehicle has travelled 600.000000 m.%  