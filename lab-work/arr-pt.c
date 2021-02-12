#include<stdio.h>

// int main() {
//     int arr[2][2] = { {2, 4}, {6, 8}};
//     int *ptr = arr;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j ++) {
//             printf("%d ", *(*(arr + i)+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main() {
int x[] = {10,12,14}; 
int *y, **z;
y = x;
z = &y;
printf("x = %d, y = %d, z = %d\n", x[0], *(y+1), *(*z+2)); 
printf("x = %d, y = %d, z = %d\n", x[0], *y+1, **z+2); 
return 0;
}

