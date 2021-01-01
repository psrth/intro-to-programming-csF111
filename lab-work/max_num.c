#include<stdio.h>

void main () {
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("Max numbers is %d", a);
        }
        else
            printf("Max numbers is %d", c);

    }
    else if (b > a) {
        if (b > c) {
            printf("Max numbers is %d", b);
        }
        else
            printf("Max numbers is %d", c);
    }   
}