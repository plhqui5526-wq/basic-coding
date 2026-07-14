#include<stdio.h>

int main() {
    int n; scanf("%d", &n);
    char string[n];
    int countA = 0;
    int countD = 0;

    scanf("%s", string);

    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == 'A') countA++;
        else if (string[i] == 'D') countD++;
    }

    if(countA > countD) printf("Anton");
    else if(countD > countA) printf("Danik");
    else printf("Friendship");

    return 0;
}

