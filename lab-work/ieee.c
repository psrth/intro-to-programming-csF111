#include<stdio.h>

void main () {
    float input = 0.0f;
    printf("Enter decimal to be converted: ");
    scanf("%f", &input);

    int signed_bit = 0;
    int exponent = 0;
    double mantissa = 0.0;

    // Signed Bit
    if (input > 0)
        signed_bit = 0;
    else
        signed_bit = 1;
       
}