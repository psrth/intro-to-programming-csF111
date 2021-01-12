#include<stdio.h> // imprt for I/O
#include<math.h> // imprt for math.pow

// function to return the length of an int
int getNumberLength(int input){
    int count = 0;
    while(input>0){
        count++;
        input/=10;
    }
    return count;
}

// function to check whether int is armstrong
int isArmstrong(int input) {
    int isArmstrong = 0;
    int copy = input;
    int armst = 0;
    int length = getNumberLength(input);

    // compute armst
    while(input>0){
        int digit = input%10;
        armst += (int) pow(digit, length);
        input/=10;
    }

    // check if armst is equal to input
    if (copy==armst) return 1; // boolean true
    else return 0; // boolean false
}

// main function
int main () {
     int user_input = 0;
     printf("Enter number: ");
     scanf("%d", &user_input);
     printf("The number %d ", user_input);

    if(isArmstrong(user_input)) printf("is an Armstrong Number.");
    else printf("is not an Armstrong Number.");

    return 0;
}