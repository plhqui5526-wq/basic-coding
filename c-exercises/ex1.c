#include<stdio.h>

void printArray(const int array[], int length) {
    printf("[");
    for(int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if(i != length - 1) printf(", ");
    }
    printf("]\n");
}

void findPair(const int array[], int length, int sum) {
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            if((i != j) && (array[i] + array[j] == sum)) {
                printf("Pair found (%d, %d)\n", array[i], array[j]);
            }
        }
    }
}

int main() {
    int array[] = {7, 2, 3, 5, 8};
    int length = sizeof(array)/sizeof(array[0]);

    printArray(array, length);

    int sum;
    printf("What is the sum you want to input?   ");
    scanf("%d", &sum);

    findPair(array, length, sum);
    return 0;
}