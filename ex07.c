// Write a C program to store the coordinates of a point
// and calculate its distance from the origin.

#include <stdio.h>
#include<stdlib.h>
#include <math.h>

struct Point
{
    float x;
    float y;
};

int main()
{
    struct Point p;
    float distance;

    printf("Enter X Coordinate: ");
    scanf("%f",&p.x);

    printf("Enter Y Coordinate: ");
    scanf("%f",&p.y);

    distance = sqrt(p.x*p.x + p.y*p.y);

    printf("Distance from Origin = %.2f\n",distance);

    return 0;
}
