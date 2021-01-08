#include<stdio.h>
int main(){
    int term1 =0, term2 = 1, nextTerm, n;
    printf("enter your number: ");
    scanf("%d", &n);
    // display first two
    printf("Fibo upto %d: %d, %d, ", n, term1, term2);
    nextTerm = term1 + term2;
    for(;nextTerm <= n; nextTerm=term1+term2){
        printf("%d, ", nextTerm);
        term1=term2;
        term2=nextTerm;
    }
}
/*
Line 3: int term1, ==> int term1 = 0,
Line 5: n ==> &n
Line 8: && ==> +
Line 9: >= change to <=
Line 10: &nextTerm ==> nextTerm
*/