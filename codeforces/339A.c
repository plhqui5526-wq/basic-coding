#include<stdio.h>

void insertionSort(int array[], int length) {
    for(int i = 1; i < length; i++) {
        int key = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}

void printArray(const int array[], int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int array[51];
    int counter = 0;
    while(scanf("%d%*c", &array) == 1) {
        counter++;
    }
    insertionSort(array, counter);

}