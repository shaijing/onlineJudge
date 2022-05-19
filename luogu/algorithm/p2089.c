#include <stdio.h>
int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;

//luogu p2089
int res[50000][10];
int main() {
    int n, ans = 0, cnt = 10;
    scanf("%d", &n);
    for (a = 1;a <= 3;a++) for (b = 1;b <= 3;b++) for (c = 1;c <= 3;c++) for (d = 1;d <= 3;d++) for (e = 1;e <= 3;e++)
        for (f = 1;f <= 3;f++) for (g = 1;g <= 3;g++) for (h = 1;h <= 3;h++)for (i = 1;i <= 3;i++) for (j = 1;j <= 3;j++) {
            if (a + b + c + d + e + f + g + h + i + j == n) {
                res[ans][0] = a;
                res[ans][1] = b;
                res[ans][2] = c;
                res[ans][3] = d;
                res[ans][4] = e;
                res[ans][5] = f;
                res[ans][6] = g;
                res[ans][7] = h;
                res[ans][8] = i;
                res[ans][9] = j;
                ans++;
            }

        }
    printf("%d\n", ans);
    for (i = 0; i < ans; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}