#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
    char string[1000];

    scanf("%s", string);

    string[0] = (char)toupper((unsigned char)string[0]);

    printf("%s", string);
    return 0;
}