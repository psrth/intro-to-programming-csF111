#include<stdio.h>

// function declaration (prototype)
int sumOf(int, int);

int main(){
    printf("Enter two numbers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // function call
    printf("%d is the sum.", sumOf(num1, num2));

    return 0;
}

// function definition
int sumOf(int num1, int num2) {
    return num1+num2;
}