#include <stdio.h>

int main() {
    int choice ; //naming the varible
    //prompting the options
    printf("choose your option \n");
    printf(" 1. say hello \n 2. say goodbye \n 3. display current date \n");
    scanf(" %d",&choice);
    getchar() ;
//logic using switches instead of if else
    switch (choice) {
        case 1:
    printf("hello \n");
    break ;
         case 2:
        printf("goodbye \n");
    break;
         case 3:
        printf("todays date is 26/6/2025\n") ;
    break;    

  default :
  printf("please give an input from the said options");
  break;
       }
       return 0 ;
}

/* mistakes i did :
the numbers inside '' are thought of as character literals and then converted to ASC2 standard.
 thats why evenb after the correct input the code didn't work and there 1 = 49 , 2 = 50 , 3 = 51 */