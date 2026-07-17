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
    int j = 0;

    t = x;
    while(t > 0) {
        array[j] = t % 10;
        t = t / 10;
        printf("%d ", array[j]);
        j++;
    }
    bool flag = true;
    for(int i = n - 1; i >= 0; i--) {
        if(array[i] < 0) continue;
        if(array[i] != x % 10) flag = false; 
        x = x / 10;
    }

    return flag;
}

int main() {
    int x;
    scanf("%d", &x);

    bool flag = isPalindrome(x);

    if(flag) printf("YES");
    else printf("NO");

    return 0;
}