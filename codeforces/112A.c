#include<stdio.h>
#include<string.h>
#include<ctype.h>

void lowerCase(char string[]) {
    for(int i = 0; string[i] != '\0'; i++) {
        string[i] = tolower(string[i]);
    }
}

int main() {
    char string1[100], string2[100];

    scanf(" %s", &string1);
    scanf(" %s", &string2);
    
    lowerCase(string1);
    lowerCase(string2);
    
    int compare = strcmp(string1, string2);

    if(compare < 0) printf("-1");
    else if(compare > 0) printf("1");
    else printf("0");

    return 0;
}