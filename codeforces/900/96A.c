#include<stdio.h>

int main() {
    char string[101];
    scanf("%s", string);

    int count = 1;
    int flag = 0;
    int booll = 0;

    for(int i = 0; string[i + 1] != '\0'; i++) {
        if(string[i] == string[i + 1]) count++;
        else if(string[i] != string[i + 1]) count = 1;
        if(count >= 7) booll = 1;
    }

    if(booll) printf("YES");
    else printf("NO");

    return 0;
}