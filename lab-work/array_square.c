#include<stdio.h>
#include<math.h>

int main() {
    int user_input = 0;
    printf("Enter number: ");
    scanf("%d", &user_input);

    int arr[user_input];

    printf("========================\n");
    printf("Enter values for array\n");
    printf("========================\n");

    for (int i = 0; i < user_input; i++){
        printf("Element[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
     
    printf("========================\n");

    for (int i = 0; i < user_input; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("========================\n");

    for (int i = 0; i < user_input; i++){
        printf("%d ", (int)pow(arr[i],2));
    }

    printf("\n");

    printf("========================\n");
    return 0;
}