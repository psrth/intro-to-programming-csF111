#include<stdio.h>

void main () {
    int rows = 0;
    scanf("%d", &rows);
    rows-=1;

    int max_stars = 1+ 2*rows;

    for (int i = 0; i <= rows; i++) 
    {
        int ic = i*2;
        while(ic>0) {
            printf(" ");
            ic--;
        }
        
        for (int j = 0; j < max_stars; j++){
            printf(" *");
        }
        
        max_stars-=2;
        printf("\n");
    }
}