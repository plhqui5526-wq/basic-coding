#include<stdio.h>
#include<ctype.h>

void lowerr(char string[]) {
    for(int i = 0; i != '\0'; i++) {
        string[i] = (char)tolower((unsigned char)string[i]);
    }
}

void upperr(char string[]) {
    for(int i = 0; i != '\0'; i++) {
        string[i] = (char)toupper((unsigned char)string[i]);
    }
}

int main() {
    char string[101];
    scanf("%s", string);

    int up = 0; int low = 0;

    for(int i = 0; i != '\0'; i++) {
        if(string[i] >= 'A' && string[i] <= 'Z') up++;
        else if(string[i] >= 'a' && string[i] <= 'z') low++;
    }

    if(low >= up) lowerr(string);
    else upperr(string);

    printf("%s", string);
    return 0;
}