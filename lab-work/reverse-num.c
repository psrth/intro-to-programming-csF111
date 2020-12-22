#include<stdio.h>

void main()
{
	int user_input = 0;
	printf("Enter number to be checked: ");
	scanf("%d", &user_input);
	
	int input = user_input;

	int rev = 0;
	while (user_input > 0)
	{
		int rem = user_input%10;
		rev = rev * 10;
		rev = rev + rem;
		user_input = user_input/10;
	}
	
	(input == rev) ? printf("Can be reversed.") : printf("Cannot be reversed.");
}	
