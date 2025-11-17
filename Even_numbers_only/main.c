#include <stdio.h>

int main(){
    //initializing the variables
    int i  ;
    //the loop logic
    for (i=1; i<= 20;i++){
        if (i % 2!= 0){
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}