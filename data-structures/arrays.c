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
        printf("Error: Exceeding the initial memory allocation\n");
        return;
    }

    if(index < 0 || index > *length) {
        printf("Error: Invalid position\n");
        return;
    }

    for(int i = *length; i > index; i--) {
        array[i] = array[i-1];
    }

    array[index] = value;
    (*length)++;
}

void deleteArray(int array[], int *length, int index) {
    if(index < 0 || index > *length) {
        printf("Error: Invalid position\n");
        return;
    }

    for(int i = index; i < *length - 1; i++) {
        array[i] = array[i+1];
    }

    (*length)--;
}

int main() {
    int array[10] = {5, 10, 15, 20};
    int length = 4;
    int capacity = sizeof(array)/sizeof(array[0]);

    printArray(array, length);

    insertArray(array, &length, 10, 2, 12);
    printArray(array, length);

    insertArray(array, &length, 10, length, 25);
    printArray(array, length);

    deleteArray(array, &length, 1);
    printArray(array, length);

    return 0;
}