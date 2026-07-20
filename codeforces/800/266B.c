#include<stdio.h>

int main() {
    int n, t;
    scanf("%d%d", &n, &t);

    char string[n];
    scanf("%s", string);

    int timer = 0;
    for(int j = 0; j < t; j++) {
        for(int i = 0; i < n - 1; i++) {
            if(string[i] == 'B' && string[i + 1] == 'G') {
                char temp = string[i + 1];
                string[i + 1] = string[i];
                string[i] = temp;
                i += 2;
            }
        }
    }

    printf("%s", string);
    return 0;
}