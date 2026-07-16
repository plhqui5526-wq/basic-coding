#include<stdio.h>
#include<string.h>

int main() {
    char s[101], t[101];

    scanf("%s", &s);
    scanf(" %s", &t);

    int left = 0;
    int right = strlen(s) - 1;

    while(left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    if(strcmp(s, t) == 0) printf("YES");
    else printf("NO");

    return 0;
}