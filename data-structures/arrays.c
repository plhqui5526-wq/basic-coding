#include<stdio.h>

void printArray(int array[], int length) {
    for(int i = 0; i < length; i++) {
        printf("Element[%d] = %d\n", i, array[i]);
    }
}

int sumArray(int array[], int length) {
    int sum=0;

    for(int i = 0; i < length; i++) {
        sum += array[i];
    }

    return sum;
}

double avgArray(int array[], int length) {
    int S = sumArray(array, length);

    return (double) (S / length);
}

int main() {
    int array[] = {4, 8, 15, 16, 23, 42};
    int length = sizeof(array)/sizeof(array[0]);
    array[2] = 17;

    printArray(array, length);


    return 0;
}