#include<stdio.h>

// For any two-digit number, print it in word form

int main() {
    char *arr[3][10] = {
                    {"zero", "one", "two", "three", "four", "five", "six", "seven","eight","nine"},
                    {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"},
                    {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"}
                };

    int user_input = 0;
    printf("Enter number: ");
    scanf("%d", &user_input);

    if (user_input<10) {
        printf("%s", arr[0][user_input]);
    } else if (user_input < 20) {
        printf("%s", arr[1][user_input%=10]);
    } else {
        printf("%s-", arr[2][user_input/10]);
        printf("%s\n", arr[0][user_input%10]);
    }
}

