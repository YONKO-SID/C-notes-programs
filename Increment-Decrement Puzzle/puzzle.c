#include <stdio.h>
int main()
{
	//inputs
	int val1 = 10 , val2 = 20 ;
	//ouputs
	int output1 , output2 ;
	// operations
	output1 = ++val1 ;
	printf("output 1 is %d\n", output1 );
	output2 = val2-- ;
    printf("output 2 is %d\n", output2 );
    output1 = val1++ ;
    printf("output 1 is %d\n", output1 );
    output2 = --val2 ;
  printf("output 2 is %d\n", output2);
	return 0;
}