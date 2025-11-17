#include <stdio.h>
#include <string.h>

int main () {
const char *password = "secret123" ; // the password
//the variables 
char input[10] ;
int attempts = 3;
int authenticated = 0;
printf("you have 3 tries to enter the correct password \n") ;
//the loop  and program logic
do {
    printf("enter your password now : \n");
scanf("%9s", input) ;
//when i put a wrong password above the string limit it doesn't clear the buffer so i use this to clear it 
//because if not then the chance for the third try will be affected as it will take leftover characters from
//the previous input 
int c;
while ((c = getchar()) != '\n' && c != EOF);
//the if else statement to check if the password is correct
if (strcmp(input,password) == 0) {
        printf("you have been granted the access \n");
        authenticated = 1;
        break;
        //the else statement to check if the password is incorrect
    } else {
        printf("your access has been denied \n");
        attempts--;
        //the if statement to check if the user has any attempts left and print his remaining attempts
        if (attempts > 0) {
            printf("incorrect attempt you have %d %s remaining \n", attempts, attempts == 1 ? "chance" : "chances");
        }
    }

}while (attempts > 0);
//the "!" is used for not equal so here if he wasn't authenticated then print denied acess maybe i could've used if attempts == 0 then print denied acess
if (!authenticated) {
    printf("too many incorrect attempts your account is suspended \n");
}
	return 0 ;
    
}
/* one of the really hard and annoying ones (homeworks) 
so here what i did was 
1- i used do while loop to make sure the code runs at least once
2- i used if else to check if the password is correct
3- i used a counter to count the number of attempts
4- i used a boolean , here instead of using 0 for false and 1 for true i could use #include <stdbool.h> and use true and false instead of 0 and 1 to work
5- i used a break to exit the loop when the password is correct
6- i used if statements to check if the password is correct
7- i used the ! operator to check if the user wasn't authenticated
8- i used the strcmp function to compare the password and the input
*/