#include<stdio.h>

void printArray(const int array[], int length) {
    for(int i = 0; i < length; i++) {
        printf("Element[%d] = %d\n", i, array[i]);
    }
}

int sumArray(const int array[], int length) {
    int sum=0;

    for(int i = 0; i < length; i++) {
        sum += array[i];
    }

    return sum;
}

double avgArray(const int array[], int length) {
    if(length == 0) return 0.0;

    int S = sumArray(array, length);

    return (double) S / length;
}

void insertArray(int array[], int *length, int capacity, int index, int value) {
    if(*length >= capacity) {
        printf("Error: Exceeding the initial memory allocation");
        return;
    }

    if(index < 0 || index > *length) {
        printf("Error: Invalid position");
        return;
    }

    for(int i = *length; i > index; i--) {
        array[i] = array[i-1];
    }

    array[index] = value;
    (*length)++;
}

int main() {
    int array[10] = {4, 8, 15, 16, 23, 42};
    int length = sizeof(array)/sizeof(array[0]);
    array[2] = 17;

    printArray(array, length);

    insertArray(array, &length, 10, 2, 199);

    printArray(array, length);

    return 0;
}