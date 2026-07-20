#include<stdio.h>

int main() {
    int n; scanf("%d", &n);

    int current = 0;
    int in, out;
    int max = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d%d", &in, &out);

        current += -in + out;

        if(current > max) max = current;
    }

    printf("%d", max);
    return 0;
}