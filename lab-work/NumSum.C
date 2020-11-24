#include<stdio.h>
// this is a pre-processor directive

int main(){
    int a, b, sum;

    printf("Please enter the values of a and b: \n");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("The sum is %d\n", sum);
    return 0;
}