#include<stdio.h>

int romanCheck(char s) {
    if(s == 'I') return 1;
    else if(s == 'V') return 5;
    else if(s == 'X') return 10;
    else if(s == 'L') return 50;
    else if(s == 'C') return 100;
    else if(s == 'D') return 500;
    else return 1000;
}

int romanToInt(char* s) {
    int sum = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        sum += romanCheck(s[i]);
        printf("initial sum[%d]: %d\n", i, sum);

        if(s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) sum -= 2;
        else if(s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) sum -= 20;
        else if(s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) sum -= 200;

        printf("after sum[%d]: %d\n", i, sum);
    }

    return sum;
}


int main() {
    char roman[16];
    scanf("%s", roman);

    int romanSum = romanToInt(roman);
    printf("%d", romanSum);
    return 0;
}