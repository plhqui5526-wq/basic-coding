#include<stdio.h>

int main() {
    int n; int p, q;

    scanf("%d", &n);

    int counter = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d%d", &p, &q);

        if(p + 2 <= q) counter++;
    }

    printf("%d", counter);
    return 0;
}