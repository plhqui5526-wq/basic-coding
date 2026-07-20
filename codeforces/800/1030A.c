#include<stdio.h>
#include<stdlib.h>

int main() {
    int n; scanf("%d", &n);
    int *input = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    int flag = 0;

    for(int i = 0; i < n; i++) {
        if(input[i] == 1) {
            flag = 1;
            break;
        } 
    }

    if(flag) printf("HARD");
    else printf("EASY");

    return 0;
}