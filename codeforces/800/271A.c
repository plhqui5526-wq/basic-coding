#include<stdio.h>
#include<stdbool.h>

bool check(int i) {
    int seen[10] = {0};

    while(i > 0) {
        int num = i % 10;
        seen[num]++;
        i /= 10;
    }

    for(int j = 0; j < 10; j++) {
        if(seen[j] > 1) {
            return false;
        }
    }

    return true;
}

int main() {
    int y;
    scanf("%d", &y);
    int flag = 1;
    for(int i = y + 1; i <= 9012; i++) {
        if(check(i)) {
            printf("%d", i);
            break;
        }
    }
    
    return 0;
}