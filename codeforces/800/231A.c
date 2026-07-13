#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count=0;
    int array[3];
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &array[0], &array[1], &array[2]);
        int sum = array[0] + array[1] + array[2];
        if(sum >= 2) count++;
    }

    printf("%d", count);
    return 0;
}