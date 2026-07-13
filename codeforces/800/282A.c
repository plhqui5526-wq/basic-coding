#include<stdio.h>

int main() {
    int n; scanf("%d", &n);

    int x=0;
    char input[3];
    for(int i = 0; i < n; i++) {
        scanf(" %c%c%c", &input[0], &input[1], &input[2]);

        if(input[1] == '+') x++;
        if(input[1] == '-') x--;
    }

    printf("%d", x);
}