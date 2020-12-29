#include<stdio.h>

void main() {
    int input = 0;
    int sum = 1;

    printf("Enter a number: ");
    scanf("%d", &input);

    for (int i = 1; i<= input; i++){
        sum = sum * i;
    }
    
    printf("The factorial of %d is %d.", input, sum);
}

