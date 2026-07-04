#include<stdio.h>

int main() {
    int kilos;
    printf("Enter the number of kilos: ");
    scanf("%d", &kilos);

    int test = kilos / 2;

    if(test % 2== 0 && test > 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}