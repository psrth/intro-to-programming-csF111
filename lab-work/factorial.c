#include<stdio.h>

void main() {
    int input = 0;
    int sum = 1;


    printf("Enter a number: ");
    scanf("%d", &input);

    // if (input == 3) printf("number is 3");
    // else printf("number is not 3");

    (input == 3) ? printf("number is 3") : printf("number is not 3");

    for (int i = 1; i <= input; i++)
    {
        sum = sum * i;
    }
    
    printf("The factorial of %d is %d.", input, sum);
}
 

