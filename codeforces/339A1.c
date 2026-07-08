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

    for(int i = 0; i < counter1; i++) {
        printf("1");
        if(i == counter1 - 1) {
            if(counter2 == 0 && counter3 == 0) break;
            else printf("+");
        } else printf("+");
    }
    for(int i = 0; i < counter2; i++) {
        printf("2");
        if(i == counter2 - 1) {
            if(counter3 == 0) break;
            else printf("+");
        } else printf("+");
    }
    for(int i = 0; i < counter3; i++) {
        printf("3");
        if(i != counter3 - 1) printf("+");
    }
    return 0;
}