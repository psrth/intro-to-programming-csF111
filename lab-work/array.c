#include<stdio.h>

int main() {

    // initializing array of size based on user input
    int array_size = 10;
    printf("Enter size of array: ");
    scanf("%d", &array_size);
    int arr[array_size];



    // read all elements of an array from the user
    for (int i = 0; i < array_size; i++){
        printf("Enter element %d: ", (i+1));
        scanf("%d", &arr[i]);
    }



    // printing the array
    printf("Array is: ");
    for (int i = 0; i < array_size; i++){
        printf("%d ", arr[i]);
    }



    // printing the sum of all array elements
    int sum = 0;
    for (int i = 0; i < array_size; i++){
        sum += arr[i];
    }
    printf("\n");
    printf("Sum of all elements is: %d\n", sum);



    // size of array using sizeof operator
    int array_size2 = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array is: %d\n", array_size2);



    // copy all elements of arr1 into arr2
    int arr2[array_size];
    for (int i = 0; i < array_size; i++) {
        arr2[i] = arr[i];
    }
    printf("Copied array is: ");
    for (int i = 0; i < array_size; i++){
        printf("%d ", arr2[i]);
    }



    // reverse array using function (see after main)
    int reverseArray(int arr[], int array_size);
    printf("\n");
    reverseArray(arr2, array_size);
    // NOTE, AFTER THIS OPERATION, ARR2 STORES REVERSED VALUES.



    // WAP to print number of duplicate elements in an array
    printf("\n");
    int master_counter = 0;
    for(int i = 0; i < array_size; i++) {
        int var_check = arr[i];
        int counter = 0;
        for (int j = i; j < array_size; j++) {
            if (arr[j] == var_check)
                counter++;
        }
        if (counter > 1) {
            printf("%d occurs %d times in the array.\n", var_check, counter);
            master_counter++;
        }
    }
    if (master_counter == 0)
        printf("No duplicates were found.\n");



    // WAP to print maximum and minimum number in an array
    int max_num = arr[0], min_num = arr[0];
    for (int i = 0; i < array_size; i++){
        if (arr[i] > max_num)
            max_num = arr[i];
        if (arr[i] < min_num)
            min_num = arr[i];
    }
    printf("Largest number is: %d\n", max_num);
    printf("Smallest number is: %d\n", min_num);



    // WAP to seperate even and odd numbers into 2 arrays
    int even_arr[array_size];
    int even = 0;

    int odd_arr[array_size];
    int odd = 0;

    for (int i = 0; i < array_size; i++) {
        if (((arr[i])%2) == 0) {
            even_arr[even] = arr[i];
            even++;
        }
        else {
            odd_arr[odd] = arr[i];
            odd++;
        } 
    }

    printf("Array is: ");
    for (int i = 0; i < array_size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Even array is: ");
    for (int i = 0; i < even; i++){
        printf("%d ", even_arr[i]);
    }
    printf("\n");
    printf("Odd array is: ");
    for (int i = 0; i < odd; i++){
        printf("%d ", odd_arr[i]);
    }
    printf("\n");



    // WAP to find second largest element in an array
    int largest_num = arr[0], sl_num = arr[0];
    for (int i = 0; i < array_size; i++) {
        if (arr[i] > largest_num){
            sl_num = largest_num;
            largest_num = arr[i];
        }
    }
    printf("Second largest number is: %d\n", sl_num);

}


int reverseArray(int arr[], int array_size){
    int half_point = array_size/2;
    for (int i = 0; i <= half_point; i++){
        int rev_index = array_size - (i+1);
        int temp = arr[i];
        arr[i] = arr[rev_index];
        arr[rev_index] = temp;
    }

    printf("Reversed array is: ");
    for (int i = 0; i < array_size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}