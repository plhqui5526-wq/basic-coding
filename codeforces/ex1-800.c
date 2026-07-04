#include<stdio.h>

int main() {
    int kilos;
    printf("Enter the number of kilos: ");
    scanf("%d", &kilos);

    if(kilos % 2 == 0 && kilos > 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}