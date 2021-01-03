#include<stdio.h>

void main() {
    int input = 0;

    printf("1. Login\n2. Sign Up With Google\n3.Refer a friend");
    scanf("%d", &input);

    switch (input) {
        case 1: printf("you are logged in.");
                break;
        case 2: printf("you are signed in with google.");
                break;
        case 3: printf("you have referred a friend");
                break;
        default: printf("Invalid, try again.");
    }

}