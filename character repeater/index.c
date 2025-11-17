#include <stdio.h>

int main (){
    //variables
    char letter ;
    int x ;
    //main program
    printf("give the character you want to repeat \n");
    scanf("%c",&letter);
    getchar() ;
    printf("how many times do you want to repeat the character \n");
    scanf("%d",&x) ;
    getchar() ;
    for (int i = 0 ; i < x ; i++){
        printf("%c\n",letter)  ;
    }
   
    return 0 ;
}