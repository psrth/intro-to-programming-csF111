#include<stdio.h>
#include<stdlib.h>

// int main()
// {
//     int num = returns(sizeof(float));
//     printf("Value of %d is", ++num);
//     return 0;
// }

// int returns(int returns){
//     returns+=5.01;
//     return(returns);
// }
int fun(int x){
        return((x& (x-1))==0);
    }
int main() {
    fun(16);
}


