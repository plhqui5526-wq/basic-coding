#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool isPalindrome(int x) {
    char array[12];

    snprintf(array, sizeof(array), "%d", x);

    int left = 0;
    int right = strlen(array) - 1;
    
    bool flag = true;
    while(left < right) {
        if(array[left] != array[right]) flag = false;

        left++;
        right--;
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