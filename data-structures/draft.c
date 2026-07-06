#include<stdio.h>

void printArray(const int array[], int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int sumArray(const int array[], int length) {
    int sum = 0;

    for(int i = 0; i < length; i++) {
        sum+= array[i];
    }

    return sum;
}

double avgArray(const int array[], int length) {
    if(length == 0) return 0.0;

    int sum = sumArray(array, length);
    return (double) sum / length;
}

void insertArray(int array[], int *length, int capacity, int index, int value) {
    if(*length >= capacity) {
        printf("Error: exceeding capacity");
        return;
    }

    if(index > *length || index < 0) {
        printf("Error: invalid position");
        return;
    }

    for(int i = *length; i > index; i--) {
        array[i] = array[i - 1];
    }

    array[index] = value;
    (*length)++;
}

void deleteArray(int array[], int *length, int index) {
    if(*length == 0) {
        printf("Error: list is empty");
        return;
    }

    if(index >= *length || index < 0) {
        printf("Error: invalid position");
        return;
    }

    for(int i = index; i < *length - 1; i++) {
        array[i] = array[i + 1];
    }

    (*length)--;
}

int linearSearch(const int array[], int length, int value) {
    for(int i = 0; i < length; i++) {
        if(array[i] == value) return i;
    }

    return -1;
}

int binarySearch(const int array[], int length, int value) {
    int left = 0;
    int right = length - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(array[mid] == value) return mid;
        else if(array[mid] < value) left = mid + 1;
        else if (array[mid] > value) right = mid - 1;
    }

    return -1;
}

void bubbleSort(int array[], int length) {
    int swapped = 0;
    for(int i = 0; i < length - 1; i++) {
        swapped = 0;

        for(int j = i; j < length - 1 - i; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;

                swapped = 1;
            }
        }

        if(!swapped) return;
    }
}

void selectionSort(int array[], int length) {
    for(int i = 0; i < length - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < length; j++) {
            if(array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        if(minIndex != i) {
            int temp = array[minIndex];
            array[minIndex] = array[i];
            array[i] = temp;
        }
    }
}

void insertionSort(int array[], int length) {
    for(int i = 1; i < length - 1; i++) {
        int key = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        
        array[j + 1] = key;
    }
}

int main() {
    int array[] = {3, 7, 6, 5, 2};

    return 0;
}