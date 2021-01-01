#include<stdio.h>

void main()
{
	int month = 0;
	
	printf("Enter month numbers (1-12): ");
	scanf("%d", &month);

	(month < 3) ? printf("Winter") : 
		((month < 6) ? printf("Spring") : 
			((month < 9) ? printf("Summer") : 
				(month < 12) ? printf("Autumn") :
					printf("Winter")));
					
}


