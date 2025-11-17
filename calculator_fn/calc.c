#include <stdio.h>

int calculateProduct(int n1 , int n2);
int main()
{            
	// initializing variables
	int num1, num2;
	long long product ;
	// prompting them for input
	printf("enter the values \n");
	// storing values
	 printf("enter the first number \n");
	scanf("%d", &num1);
	printf("enter the second number \n");
	scanf("%d", &num2);
	product = calculateProduct(num1, num2);
	printf("The product is : %lld", product);
	return 0;
}

int calculateProduct(int n1, int n2)
{       // redefining anoter variable n1 and n2 because of function scoping restrictions 
	long long result = n1*n2 ;
	return result;
}
