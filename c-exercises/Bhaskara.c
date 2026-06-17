#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c;
    printf("Input three numbers a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    printf("Your equation is: %.0lfx^2 + %.0lfx + %.0lf = 0\n\n", a, b, c);

    if(a==0) {
        if(b==0) {
            printf("Error: This cannot be a valid equation");
        } else {
            double x = -c / b;
            printf("This is a linear equation\n");
            printf("x = %lf", x);
        }

        return 0;
    }

    double discriminant = b*b - 4*a*c;

    if(discriminant < 0) {
        printf("Unable to calculate using Bhaskara's formula");
        return 0;
    }
    
    double sq = sqrt(discriminant);

    double x1, x2;
    x1 = (-b + sq)/(2*a);
    x2 = (-b - sq)/(2*a);

    printf("x1 = %lf\n", x1);
    printf("x2 = %lf\n", x2);
    return 0;
}