#include<stdio.h>

void reverse_array(int a[], int n) {
    for (int i = 0; i <= n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

void printArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}


int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;

    printArray(array, n);

    reverse_array(array, n);

    printArray(array, n);

    return 0;
}