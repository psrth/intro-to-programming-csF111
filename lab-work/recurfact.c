#include<stdio.h>

int factorial (int);

int main() {
    int user_input = 0;
    printf("Enter number: ");
    scanf("%d", &user_input);
    printf("Factorial of %d is: %d\n", user_input, factorial(user_input));
}

int factorial (int i) {
    if (i > 0) return i*factorial(i-1);
    else return 1;
}