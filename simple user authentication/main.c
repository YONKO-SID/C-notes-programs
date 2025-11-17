#include <stdio.h> 

int main() {
	 const int PIN = 1234 ; //setting  up the main password
	int password ;
        // prompting the user to enter the pin
	printf("enter your 4 digit pin  ") ;
	scanf("%d", &password );
	if (password == PIN){
		printf("access has been granted ") ;
	}
	else {
		printf("access denied") ;
	}

	return 0 ;
 
	}
