#include <stdio.h>
 int main(int argc, char const *argv[])
{
	int age = 19 ;
	float height = 177.2 ;
	char first_initial = 'S' ;
	double net_worth = 1000.07335 ;
	const char favorite_letter = 'P' ;

	printf("Hello my name is SID and this is my bio data \n" );
	printf("AGE = %d \n", age);
	printf("Height = %.2f \n", height);
	printf("My first initial is %c\n",first_initial );
	printf("Net_worth = %.2lf\n", net_worth);
	printf("last but not least my favourate letter is %c \n", favorite_letter);
	return 0;
}