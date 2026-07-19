#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, h;
    scanf("%d%d", &n, &h);
    int *array = malloc(n * sizeof(int));

    int sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);

        if(array[i] > h) sum += 2;
        else sum += 1;
    }

    printf("%d", sum);
    return 0;
}