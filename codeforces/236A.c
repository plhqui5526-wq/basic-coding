#include<stdio.h>

int main() {
    char string[100];

    scanf(" %s", string);

    int seen[256] = {0};
    int distinctCount = 0;

    for(int i = 0; string[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)string[i];

        if(seen[ch] == 0) {
            seen[ch] = 1;
            distinctCount++;
        }

    }

    if(distinctCount % 2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

    return 0;
}