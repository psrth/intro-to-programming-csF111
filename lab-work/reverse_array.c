#include<stdio.h>

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(int);


    for (int i = 0; i<(length/2); i++){
        int j = length - i - 1;

        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i<length; i++){
        printf("%d ", arr[i]);
    }

}