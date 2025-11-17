#include <stdio.h>

int main (void) {
	// the input variables 
	int num1 = 60 ;
	int num2 = 26 ;


//the output variables
 int result_int ;
  float result_float;
	//operations
	printf("addition of both numbers is %d + %d = %d\n",num1,num2 , num1 + num2 );
	printf("subration of both numbers is %d - %d = %d\n", num1, num2 , num1 - num2);
	printf("multiplication of both numbers is %d * %d = %d\n",  num1, num2 , num1*num2);
	printf("divison of both numbers is %d / %d = %d\n", num1, num2 , num1/num2);
	// other operations
	result_int = num1/num2 ;
	printf("result integer is %d\n", result_int );
	float fnum1 = (float)num1;
	  fnum1 = 59.38; 
	  result_float = fnum1 / num2; // Or (float)num1 / num2 directly
	 printf("result float is %.2f \n",result_float );
	 num1 % num2 ;
	 printf("modulo of both numbers is %d %% %d = %d\n", num1, num2, num1 % num2); // Use %% to print a literal %
	 return 0 ;
}