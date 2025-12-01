/*
Calculate Area of a Circle using a function that takes radius as input
and returns the computed area.
*/

#include <stdio.h>

float area(float r) 
{
    return 3.14159f * r * r;
}

int main() 
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f\n", area(radius));
    return 0;
}