#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    int t = x;
    int n = 0;
    while(t > 0) {
        t = t / 10;
        n++;
    }
    
    int array[n];
    int i = 0;

    int q = x;
    while(q > 0) {
        array[i] = q % 10;
        q = q / 10;
        i++;
    }
    bool flag = 1;
    for(int i = n - 1; i >= 0; i++) {
        if(array[i] != x % 10) flag = 0; 
    }

    return flag;
}