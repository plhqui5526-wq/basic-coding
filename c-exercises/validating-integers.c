#include<stdio.h>

int main() {
    int p, q, r ,s;

    printf("Please type in the values of p, q, r, s: ");
    scanf("%d%d%d%d", &p, &q, &r, &s);

    if((q < 0) || (r < 0) || (s < 0)) {
        printf("Error: Invalid values --- q, r, s must be positive");
        return 0;
    }

    if(p % 2 != 0) {
        printf("Error: Invalid value --- p must be even");
        return 0;
    }

    if((q>r) && (s>p) && ((r+s)>(p+q))) printf("Correct values");
    else printf("Wrong values");

    return 0;
}