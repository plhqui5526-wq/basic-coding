#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    
}

int main() {
    int x;
    scanf("%d", &x);

    bool flag = isPalindrome(x);

    if(flag) printf("YES");
    else printf("NO");

    return 0;
}