#include<stdio.h>

void main() {
    int rows = 5;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i=1; i<=rows; i++) {
        int spacecounter = rows - i;
        for (int j=1; j<= i; j++) {
            while(spacecounter>0){
                printf("  ");
                spacecounter--;
            }
            printf("%d ", j);
        }
        for (int j=i-1; j>= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");    
    }
}