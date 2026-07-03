#include<stdio.h>

void printArray(const int array[], int length) {
    printf("[ ");
    for(int i = 0; i < length; i++) {
        printf("%d", );
        if(i != length - 1) printf(", ");
    }
    printf(" ]\n");
}

int main() {
    int array[] = {7, 2, 3, 5, 8};
    int length = sizeof(array)/sizeof(array[0]);

    printArray(array, length);

    return 0;
}