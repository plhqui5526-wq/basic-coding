#include<stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int i = 5;
    int counter=0;
    int fal;
    while(x>0) {
        counter += x/i;
        fal = x/i;
        x = x - (fal*i);
        i--;
    }

    printf("%d", counter);

    return 0;
}