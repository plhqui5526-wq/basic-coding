#include<stdio.h>

int findDistinctSecondLargest(int array[], int length) {
    int flag=-1;

    int max = -9999;
    for(int i = 0; i < length; i++) {
        if(array[i] > max) max = array[i];
    }

    int max1 = -999;
    int max1index = -1;
    for(int i = 0; i < length; i++) {
        if(array[i] > max1 && array[i] < max) 
        {
            max1 = array[i];
            max1index = i;
        }
    }

    
    if(max1index != -1) {
        flag = max1index;
        for(int i = 0; i < length; i++) {
            if(array[i] == max1) {
                if(i!=max1index) flag = -1;
            }
        }
    }

    return flag;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int array1[] = {1, 1, 2, 2, 2};
    int array2[] = {3, 3, 3, 3, 3};

    int length = 5;

    int result = findDistinctSecondLargest(array, length);
    int result1 = findDistinctSecondLargest(array1, length);
    int result2 = findDistinctSecondLargest(array2, length);

    if(result != -1) {
        printf("The second-largest distinct value of array is at index %d\n", result);
        printf("Its value is %d\n", array[result]);
    } else printf("Cannot find the value of array");

    printf("============================\n");

    if(result1 != -1) {
        printf("The second-largest distinct value of array 1 is at index %d\n", result1);
        printf("Its value is %d\n", array1[result1]);
    } else printf("Cannot find the value of array 1\n");

    printf("============================\n");

    if(result2 != -1) {
        printf("The second-largest distinct value of array 2 is at index %d\n", result2);
        printf("Its value is %d\n", array2[result2]);
    } else printf("Cannot find the value of array 2\n");
}