#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
	float x;
	float y;
} Point;

typedef struct {
	Point centre ;
	float radius;
} Circle;

float calculateDistance( Point p1, Point p2 );
int isPointInCircle(Point p, Circle c);
int main(){

     Point p1, p2;
    Circle c1;
	printf("Enter the coordinates of the point p1 \n");
	printf("x : ");
	scanf("%f",&p1.x);
	getchar();
    printf("y : ");
    scanf("%f",&p1.y);
    getchar();
    printf("Enter the coordinates of the point p2 \n");
    printf("x : ");
    scanf("%f",&p2.x);
    getchar();
    printf("y : ");
    scanf("%f",&p2.y);
    getchar();
    printf("Enter the coordinates of the centre of the circle \n");
    printf("x : ");
    scanf("%f",&c1.centre.x);
    getchar();
    printf("y : ");
    scanf("%f",&c1.centre.y);
    getchar();
    printf("Enter the radius of the circle \n");
    scanf("%f", &c1.radius);
    getchar();
float distance = calculateDistance(p1,p2);
printf("The distance between the points is %.4f \n", distance);
    int result = isPointInCircle(p1,c1);
    if(result == 1){
        printf("The point p1 is inside the circle\n");
    }
    else{
        printf("The point p1 is outside the circle\n");
    }
return 0;
}

float calculateDistance( Point p1, Point p2 ){
	float distance = sqrt(pow((p2.x-p1.x),2) + pow((p2.y-p1.y),2)) ;
	return distance;
}

int isPointInCircle(Point p,  Circle c){
    float distance = calculateDistance(p,c.centre);
    if(distance <= c.radius){
        return 1;
    }
    else{
        return 0;
    }
}