#include<stdio.h>
#include<stdlib.h>

int* twoSums(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 0;

    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                int* result = malloc(2 * sizeof(int));

                if(!result) return NULL;

                result[0] = i;
                result[1] = j;
                *returnSize = 2;

                return result;
            }
        }
    }

    return NULL;
}