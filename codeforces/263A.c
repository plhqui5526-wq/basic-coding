#include<stdio.h>

int main() {
    int a[6][6];
    int spei, spej;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 1) {
                spei = i;
                spej = j;
            }
        }
    }

    int sum=0;

    if(spei < 3) sum += 3 - spei;
    else sum += spei - 3;

    if(spej < 3) sum += 3 - spej;
    else sum += spej - 3;

    printf("%d", sum);
    return 0;
}