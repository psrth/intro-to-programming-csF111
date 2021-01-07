#include<stdio.h>

void main() {
    int menu;
    float input, output;
    printf("1. Celsius to Farenheit\n2. Farenheit to Celsius\n3. Quit\n");
    scanf("%d", &menu);
    
    switch(menu){
        case 1: printf("Enter temperature in C: ");
                scanf("%f", &input);
                output = (input*9/5)+32;
                printf("%.4fC is equal to %.3f Farenheit", input, output);
                break;
        case 2: printf("Enter temperature in F: ");
                scanf("%f", &input);
                output = (input-32)*(5/9);
                printf("%.3fF is equal to %.4f celsius", input, output);
                break;
        case 3: exit(0);
                break;
        default: printf("Error, try again.");
    }
}