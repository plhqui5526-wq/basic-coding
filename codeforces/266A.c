#include<stdio.h>

int main() {
    int x;
    char stones[51];

    scanf("%d", &x);
    scanf("%s", stones);

    int counter = 0;
    for(int i = 0; i < x - 1; i++) {
        if(stones[i] == stones[i+1]) counter++;
    }
    printf("%d", counter);
    return 0;
}