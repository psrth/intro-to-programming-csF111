#include<stdio.h>

void main()
{
 char opr;
 int num1, num2;
 int result;
 
 // IO stream
 printf("Enter an operator(+,-,*,/): ");
 scanf("%c", &opr);

 printf("Enter number 1: ");
 scanf("%d", &num1);

 printf("Enter number 2: ");
 scanf("%d", &num2);
 
 // logic implemented with if/else
 if (opr == '+') result = num1 + num2;
 else if (opr == '-') result = num1 - num2;
 else if (opr == '*') result = num1 * num2;
 else if (opr == '/') {
	if (num2 == 0) printf("Error, please do not divide by 0.");
	else result = num1 / num2;
 }
 printf("If-else Calculation\n");
 printf("%d %c %d is %d.\n", num1, opr, num2, result);
 printf("\n");

 switch(opr)
 {
	case '+': result = num1 + num2;
		  break;
	case '-': result = num1 - num2;
                  break;
	case '*': result = num1 * num2;
                  break;
	case '/': if (num2 == 0) printf("Error, please do not divide by 0.");
        	  else result = num1 / num2;
                  break;
	default: "Try Again!";
 }
 printf("Switch Calculation\n");
 printf("%d %c %d is %d.\n", num1, opr, num2, result);
 printf("\n");
}
