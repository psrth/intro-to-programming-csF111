#include<stdio.h>

int main() {
	int rows = 0;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	
	for (int i = 1; i <= rows; i++){
		int spaces_count = rows-i;
		
		while (spaces_count > 0){
			printf("  ");
			spaces_count--;
		}

		int i_d = i;
		int i_dd = i;

		while(i_d>0){
			printf("%d ", i_dd);
			i_d--;
			i_dd++;
		}

		while(i_d+1 < i){
			printf("%d ", i_dd);
			i_d++;
			i_dd--;
		}

		printf("\n");		
	}
	return 0;
}
