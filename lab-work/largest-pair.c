#include<stdio.h>

void main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {
        if (c > d) {
            if (c > b) {
                printf("%d", a+c);
            }
            else {
                printf("%d", a+b);
            }
        }
        else {
            if (d > b) {
                printf("%d", a+d);
            }
            else {
                printf("%d", a+b);
            }
        }
    }
    else {
        if (c > d) {
            if (c > a) {
                printf("%d", b+c);
            }
            else {
                printf("%d", b+a);
            }
        }
        else {
            if (d > a) {
                printf("%d", b+d);
            }
            else {
                printf("%d", b+a);
            }
        }
    }
}