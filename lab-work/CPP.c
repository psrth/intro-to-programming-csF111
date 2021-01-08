#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*
    The idea is to use this program to cover
    — Binary to Decimal
    - Decimal to Binary
    - Base 1 to Base 2
    - Decimal to IEEE
    - IEEE to Decimal
*/

void main() {
    int program_status = 1;
    int input = 0;
    while(program_status){

        // Menu Block
        printf("@psrth CPP Calculator\n");
        printf("---------------------\n\n");
        printf("Select an option: \n");
        printf("1. Binary to Decimal\n2. Decimal to Binary\n3. Base 1 -> Base 2\n4. Decimal to IEEE\n5. IEEE to Decimal\n6. Quit\n");
        scanf("%d", &input);

        // Variable Declaration
        int bin_num = 0;
        int dec_num = 0;
        int counter = 0;
        int temp;

        int num = 0;
        int base1 = 0;
        int base2 = 0; 
        int out = 0;

        switch(input) {
            case 1:     printf("Enter decimal number: ");
                        scanf("%d", &dec_num);
                        temp = dec_num;
                        while(dec_num>0){
                            bin_num += (dec_num%2)*pow(10, counter);
                            dec_num /= 2;
                            counter++;
                        }
                        printf("%d converted to binary is %d\n\n", temp, bin_num);
                        break;
            
            case 2:     printf("Enter binary number: ");
                        scanf("%d", &bin_num);
                        temp = bin_num;
                        while(bin_num>0){
                            dec_num += (bin_num%10)*pow(2, counter);
                            bin_num /= 10;
                            counter++;
                        }
                        printf("%d converted to decimal is %d\n\n", temp, dec_num);
                        break;
            
            case 3:     printf("Enter number, base, and base to be converted in: ");
                        scanf("%d %d %d", &num, &base1, &base2);
                        temp = num;
                        // convert to decimal and back ffs
                        printf("%d of base %d converted to base %d is: %d\n\n", temp, base1, base2, out);
                        break;
            
            case 6:     exit(0); 
                        break;

            default:    printf("Invalid selection, please try again.");
        }
        
    }
}