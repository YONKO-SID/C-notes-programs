#include <stdio.h>

int main() {
    float distance ;
    printf("enter the distance in kilometers \n");
    scanf("%f",&distance);
    //calculations
    float distance_miles = 0.621371*distance ;
    printf("your distance in miles is %.4f\n",distance_miles);
    return 0 ;
}