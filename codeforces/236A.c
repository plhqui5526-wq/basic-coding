#include<stdio.h>

int main() {
    char string[100];

    scanf(" %s", &string);

    int duplicate = 0;
    int counter = 0;

    for(int i = 0; string[i] != '\0'; i++) {
        for(int j = i; string[j] != '\0'; j++) {
            if(string[i] == string[j] && j != i) {
                duplicate++;
            }

        }

        counter++;
    }

    int test = counter - duplicate;

    if(test % 2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

    printf(" %d %d", test, counter);
    return 0;
}