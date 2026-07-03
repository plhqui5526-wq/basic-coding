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
                return;
            }
        }
    }
    printf("No pair found.\n");
}

void insertionSort(int array[], int length) {
    for(int i = 0; i < length; i++) {
        int key = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > key) {
            array[j+1] = array[j];

            j--;
        }

        array[j+1] = key; 
    }
}

void findPairSort(int array[], int length, int sum) {
    insertionSort(array, length);

    int lowindex = 0;
    int highindex = length - 1;

    while(lowindex < highindex) {
        if(array[lowindex] + array[highindex] == sum) {
            printf("Found pair (%d, %d)\n", array[lowindex], array[highindex]);
            return;
        }
        if(array[lowindex] + array[highindex] > sum) highindex--;
        if(array[lowindex] + array[highindex] < sum) lowindex++;
    }
    printf("No pair found.\n");
}

int main() {
    int array[] = {7, 2, 3, 5, 8};
    int length = sizeof(array)/sizeof(array[0]);

    printArray(array, length);

    int sum;
    printf("What is the sum you want to input?   ");
    scanf("%d", &sum);

    findPairSort(array, length, sum);
    return 0;
}