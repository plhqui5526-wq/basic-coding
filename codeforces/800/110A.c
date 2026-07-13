#include<stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    int digits = 0;
    
    while(n > 0) {
        n = n / 10;
        digits++;
    }

    if(digits % 10 == 4 || digits % 10 == 7) printf("YES");
    else printf("NO");

    return 0;
}