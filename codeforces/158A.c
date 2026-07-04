#include<stdio.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int array[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int count=0;

    for(int i = 0; i < n; i++) {
        if((array[i] >= array[k-1]) && (array[i] > 0)) count++;
    }

    printf("%d", count);
}