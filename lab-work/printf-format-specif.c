#include<stdio.h>

int main()
{
    // the aim of this practical is to introduce format specifiers

    int x = 12; 

    printf("%5d\n", x); // right-align, total 5 spaces
    printf("%-5d\n", x); // left-align


    float x2 = 234.5678;

    printf("%8.2f\n", x2); // right-align, 8 spaces incl, 2 place precision
    printf("%-8.2f\n", x2); // left-align, 8 spaces incl, 2 place precision

    // QUESTION — WHAT HAPPENS IF THE TRUNCATED VALUE IS <8
    // ANSWER: those positions are occupied by spaces

    printf("%10.1f\n", x2); // left-align, total 10 spaces including value, precision 1 dec place

    return 0;
}