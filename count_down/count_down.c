#include <stdio.h>

int main() {
	//setting up the number value
	int number ,i ,up;
	printf("Enter any number you want \n") ;
        scanf("%d",&number) ;
	up = number ;
	getchar() ;
     //the countdown logic   
     while (number > 0){
   printf("%d ...\n",number) ;
  number-- ; } 
     //the count up logic
	printf("\n") ;
for (i = 1 ; i<=up; i++){
     printf("... %d \n", i) ;  }
return 0;
}



/* MY FIRST TRY IN WHICH ON THE LINE 16TH , FOR LOOP I INCREMENTED THE NUMBER INSTEAD OF THE 
 * "i" VARIBLE THIS LED TO AN INFINITE LOOP , SO THIS SEMINGLY HARMLESS PROGRAM
 * CAN CRASH THE COMPUTER IF LEFT UNCHECKED FOR SOMETIME  
 *
 *
 * #include <stdio.h>

int main() {
	//setting up the number value
	int number ,i;
	printf("Enter any number you want \n") ;
        scanf("%d",&number) ;
     //the countdown logic   
     while (number > 1){
   printf("%d ...\n",number) ;
  number-- ; } 
     //the count up logic
for (i = 0 ; i<=number; number++){
     printf("... %d \n", number) ;  }
return 0;
}
*/

