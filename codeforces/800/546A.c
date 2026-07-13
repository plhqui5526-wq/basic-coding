#include<stdio.h>

int main() {
    int k, n, w;
    scanf("%d%d%d", &k, &n, &w);

    int sum = 0;

    for(int i = 1; i <= w; i++) {
        sum += i*k;
    }

    if(sum > n) {
        int borrow = sum - n;
        printf("%d", borrow);
    } else printf("0");

    return 0;
}