#include<stdio.h>

int main() {
    char string[101];
    scanf("%s", string);

    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;

    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == '1') counter1++;
        else if(string[i] == '2') counter2++;
        else if(string[i] == '3') counter3++;
    }

    int first = 1;
    for(int i = 0; i < counter1; i++) {
        if(!first) printf("+");
        printf("1");
        first = 0;
    }

    for(int i = 0; i < counter2; i++) {
        if(!first) printf("+");
        printf("2");
        first = 0;
    }

    for(int i = 0; i < counter3; i++) {
        if(!first) printf("+");
        printf("3");
        first = 0;
    }
    return 0;
}