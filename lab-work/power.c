#include<stdio.h>

int power (int, int);

int main () {
	int base = 0, exp = 0;

	printf("Enter base: ");
	scanf("%d", &base);
	printf("Enter exponent: ");
	scanf("%d", &exp);

	printf("%d^%d is %d", base, exp, power(base, exp));	
}

int power(int a, int b) {
	if(b>0) return a*power(a, b-1);
	else return 1;
}
