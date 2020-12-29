#include<stdio.h>
#include <math.h>

void main(){
    printf("Welcome to Binary and Decimal Calculator!");
    printf("=========================================");

    char menu = 's';
    int input = 0;
    int num = 1;
    while(num){
        printf("(b) — Binary to Decimal \n(d) — Decimal to Binary \n(x) — Quit\n");
        scanf("%c", &menu);

        switch(menu) {
            case 'b': printf("Enter binary number: ");
                      scanf("%d", &input);
                      int n = input;
                      int dec = 0, i = 0, rem;
                      while (n != 0) {
                        rem = n % 10;
                        n /= 10;
                        dec += rem * pow(2, i);
                        ++i;
                      }
                      printf("%d", rem);
                      break;
            case 'd': printf("Enter decimal number: ");
                      scanf("%d", &input);
                      int user_input = input;
                      int base = 2;

                      int output = 0; // variable to store the converted number
                        int j = 0; // variable to track position in number
                        int user_input_copy = user_input;

                        while (user_input > 0)
                        {
                        int rem = user_input%base; // remainder for that position
                        output = output + (rem*pow(10, j)); // giving remainder appropriate tens value
                        user_input = user_input/base; // updating user input
                        i++; // updating position in converted number
                        }
                        printf("%d", output);
                        break;
            case 'x':   num = 0;
                        break;
            default:    continue;
        }
    }
}