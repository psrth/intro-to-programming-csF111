#include<stdio.h>

void main() {
    int n = 0;
    int sum = 0;
    int upper = 0;
    int lower = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n>0) {
        upper = n*2;
        lower = n;
        while(lower<=upper){
            sum = sum + lower;
            lower = lower + 1;
        }
    } 
    else {
        upper = n*2;
        lower = n*3;
        while(lower<=upper){
            sum = sum + lower;
            lower = lower + 1;
        }
    }

    printf("Sum is equal to: %d", sum);

}