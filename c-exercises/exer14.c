/*Calculate bike’s average consumption

Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000*/

#include<stdio.h>

int main() {
    printf("Input total distance in km: ");
    int km;
    scanf("%d", &km);

    printf("Input total fuel spent in liters: ");
    int fuel;
    scanf("%d", &fuel);

    double consump = (double) km / fuel;
    printf("Average consumption (km/lt): %g", consump);

    return 0;
}