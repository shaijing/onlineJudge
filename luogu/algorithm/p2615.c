#include <stdio.h>

//P2615 [NOIP2015 提高组] 神奇的幻方
int n,num[39][39];
int main() {
    
    scanf("%d", &n);
    int x = 0;
    int y = n / 2;
    for (int c = 1; c <= n * n; c++) {
        num[x][y] = c;
        if (num[(x - 1 + n) % n][(y + 1) % n] == 0) {
            x = (x - 1 + n) % n;
            y = (y + 1) % n;
        } else {
            x = (x + 1) % n;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", num[i][j]);
        }
        putchar('\n');
    }
    return 0;
}