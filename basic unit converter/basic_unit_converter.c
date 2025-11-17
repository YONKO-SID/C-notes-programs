#include <stdio.h>
int main (void)
{
	float distance_km ;
	float distance_miles ;

	//the varibles :-
	distance_km = 24.45;
	distance_miles = 0.621371 * distance_km; // direct multiplication of variables is allowed

printf ("the distance in km is %.2f \n", distance_km);
printf ("the distance in miles will be %.4f\n", distance_miles);
	return 0;
}
