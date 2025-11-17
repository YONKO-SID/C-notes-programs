#include <stdio.h>

int main (void) {
    
int person_age = 16 ;
 // The result of the ternary operation is a string literal (char*)
const char *message = (person_age >= 18) ? "The person is eligible to vote." : "The person is not eligible to vote yet." ;

//printing the message

printf("%s\n", message);

return 0 ;
}


/* my first try 

#include <stdio.h>

int main (void) {
	int person_age = 16 ;
int max = (person_age > 18)?person_age:18 ;
if true
	printf("the user is eligible to vote \n");
if false
	printf("the user is not eligible to vote\n");
return 0 ;
} */


