#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main()
 {     //types of coins 
        const int quarter = 25;
	const int dime = 10;
	const int nickel = 5;
	const int pennies = 1;

       //prompting user for coins owned
	int cents ;
	do {
	cents = get_int("Change owed (in cents) : ");
	}while (cents < 0);
	int coins_used = 0;
	int remaining = cents ;
       while (remaining > 0) {
	 if (remaining >= quarter)
     {
		       remaining  -= quarter ;}
        else if (remaining >= dime )
		{
			remaining -= dime ;}
        else if (remaining >= nickel)
		{
			remaining -= nickel ;}
        else if (remaining >= pennies)
     		{
			remaining -= pennies ;}
 
coins_used++ ;	}
	printf("%d", coins_used);
 return 0;
}
