#include <stdio.h>

int main () {
    double number ;  //naming the variables
    printf("enter the number you want to check \n");
    scanf("%lf", &number);
	getchar() ;
    // just so that the program doesn't break and only progresses after the user types the value
	// the program logic
    if (number > 0) {
        printf("the number %.4lf is positive", number) ;
}
else if (number ==0) {
		printf("the number is 0 ") ;
}
 else if (number < 0) {
	printf(" the number %.4lf is negative ", number ) ; }
	return 0 ;
}
