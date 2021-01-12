#include<stdio.h>

long factorial(long n) {
    long sum = 0;
    for (long i = 0; i < n; i++){
        sum+=i;
    }
    return sum;
}

int main(){
    long input = 0;
    printf("Enter a number: ");
    scanf("%lu", &input);
    printf("Factorial of %lu is %lu", input, factorial(input));
}