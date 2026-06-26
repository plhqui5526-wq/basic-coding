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
    if(index < 0 || index >= *length) {
        printf("Error: Invalid position\n");
        return;
    }

    for(int i = index; i < *length - 1; i++) {
        array[i] = array[i+1];
    }

    (*length)--;
}

int linearSearch(const int array[], int length, int target) {
    for(int i = 0; i < length; i++) {
        if(array[i] == target) return i;
    }

    return -1;
}

int binarySearch(const int array[], int length, int target) {
    int left = 0;
    int right = length - 1;
    int middle;

    while(left <= right) {
        middle = left + (right - left) / 2;

        if(array[middle] == target) return middle;

        if(array[middle] < target) left = middle + 1;
        else right = middle - 1;
    }

    return -1;
}

void announcement(int index) {
    if(index != -1) printf("Found element at %d\n", index);
    else printf("Not found\n");
}

int countOccurrences(const int array[], int length, int target) {
    int count = 0;

    for(int i = 0; i < length; i++) {
        if(array[i] == target) {
            count++;
        }
    }

    return count;
}

int findLastLeft(const int array[], int length, int target) {
    int index = -1;
    
    for(int i = 0; i < length; i++) {
        if(array[i] == target) {
            index = i;
        }
    }

    return index;
}

int findLastRight(const int array[], int length, int target) {
    for(int i = length - 1; i >= 0 ; i--) {
        if(array[i] == target) return i;
    }

    return -1;
}

int main() {
    int array[10] = {8, 3, 12, 7, 19, 4};
    int length1 = 6;
    int capacity = sizeof(array)/sizeof(array[0]);

    printf("==========Exercise 1==========\n");
    int index10 = linearSearch(array, length1, 7);
    int index11 = linearSearch(array, length1, 19);
    int index12 = linearSearch(array, length1, 20);

    announcement(index10);
    announcement(index11);
    announcement(index12);

    printf("The best-case time complexity is O(1)\n");
    printf("The worst-case time complexity is O(n)\n");

    printf("==========Exercise 2==========\n");
    int array2[10] = {2, 5, 2, 8, 2, 10};
    int length2 = 6;
    
    int occurrences = countOccurrences(array2, length2, 2);
    printf("Total number of times that 2 appears are: %d\n", occurrences);
    printf("Time complexity: O(n)");
    printf("Space complexity: O(1)? It creates another variable, though");

    printf("==========Exercise 3==========\n");
    int array3[10] = {4, 7, 2, 7, 9, 7};
    int length3 = 6;

    int lastIndexLeft = findLastLeft(array3, length3, 7);
    int lastIndexRight = findLastRight(array3, length3, 7);

    printf("From left to right, the last index is at %d\n", lastIndexLeft);
    printf("From right to left, the last index is at %d\n", lastIndexRight);
    printf("Time complexity for both: O(n)\n");

    printf("==========Exercise 4==========\n");
    int array4[] = {2, 5, 8, 12, 16, 23, 38, 56};
    int length4 = 8;
    int index41 = binarySearch(array4, length4, 23);
    int index42 = binarySearch(array4, length4, 2);
    int index43 = binarySearch(array4, length4, 56);
    int index44 = binarySearch(array4, length4, 15);

    printf("23, 2, 56, 15 is at index %d, %d, %d, %d\n", index41, index42, index43, index44);

    return 0;
}