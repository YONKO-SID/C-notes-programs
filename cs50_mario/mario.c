#include <stdio.h>

int main(void){
    //initializing variables
int i ,j = 0,k,s ,y;
//getting the user input
printf("Enter the number of rows: ");
scanf("%d",&j);
//looping to print the pyramid
for (i=1;i <= j ; i++) {
    for (y= 1;y <= j - i; y++){
        printf(" ");
    }
    for (k= 1;k <= i ; k++){
    printf("#");
    }
    printf("  ");
    for (s= 1; s <=i; s ++ ) {
    printf("#"); }
    // to create different rows 
printf("\n"); } 
    
        return 0;
    
}