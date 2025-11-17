#include <stdio.h>

//initializing the function
void swapNumbers(int *number1, int *number2);

int main()
{
    // variables to swap
    int num1, num2 ;
    num1= 7;
    num2= 8;
    // printing the current values 
    printf("The current values of a = %d and b = %d \n", num1,num2);
    // setting up pointers 
    int *pA = &num1;
    int *pB = &num2;
    // putting our values in the function
    swapNumbers(pA, pB);
    // printing the new values 
    printf("The current values of a = %d and b = %d \n",num1,num2);
    return 0;
}
void swapNumbers(int *number1, int *number2)
{ // number3 is just a temp storage 
    int number3 = *number1;
    /* the pointer stores address , it's super confusing when i am providing value 
     and when i am providing an address. eitherway when you wanna add value of one 
     pointer to the other then use derefrence operator on both sides  */
   *number1 = *number2;
    *number2 = number3;
  
}
/* THERE'S A BETTER WAY TO APPROACH IT TOO 
#include <stdio.h>

void swapNumbers(int *number1, int *number2);

int main()
{
    int num1 = 7, num2 = 8;
    
    printf("Before swap: a = %d, b = %d\n", num1, num2);
    
    swapNumbers(&num1, &num2);  // Pass addresses directly
    
    printf("After swap: a = %d, b = %d\n", num1, num2);
    
    return 0;
}

void swapNumbers(int *number1, int *number2)
{ 
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}
*/