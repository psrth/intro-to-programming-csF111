#include <stdio.h>

void bin(int num, int bit_range){
  for (int i = bit_range; i>=0; i--){
    
    if ((num>>i)&1){
      printf("1");	     
    }
    else{
      printf("0");
    }
  }  
}


typedef union{
  float f;
  struct{
    unsigned int mantissa : 23;
    unsigned int exponent : 8;
    unsigned int sign : 1;
  }raw;
}float_val;


void ieee_val (float_val var){
  printf("%d ", var.raw.sign);
  bin(var.raw.exponent,8);
  printf(" ");
  bin(var.raw.mantissa,23);
  printf("\n");
}


int main() {
  float_val var;
  printf("Enter a number: ");
  scanf("%f", &var.f);
  printf("IEEE representation of %f is: ", var.f);
  ieee_val(var);
  printf("\n");
}
  
