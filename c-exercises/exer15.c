/*Calculate distance between two points

Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803*/

#include<stdio.h>
#include<math.h>

int main() {
    double x1, x2, y1, y2;

    printf("Input x1: ");
    scanf("%lf", &x1);
    printf("Input y1: ");
    scanf("%lf", &y1);
    printf("Input x2: ");
    scanf("%lf", &x2);
    printf("Input y2: ");
    scanf("%lf", &y2);

    double calc = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    double distance = sqrt(calc);
    printf("Distance between the said points = %g", distance);

    return 0;
}