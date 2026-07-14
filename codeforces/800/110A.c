#include<stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    int digits = 0;
    int digit;
    
    while(n > 0) {
        digit = n % 10;
        if(digit == 4 || digit == 7) digits++;
        n = n / 10;
    }
    if(digits % 10 == 4 || digits % 10 == 7) printf("YES");
    else printf("NO");

    return 0;
}