/**
 * @File Name: p2670.c
 * @Brief :
 * @Author : YuLing (yulingsc@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-04-12
 *
 */
#include <stdio.h>
#include <stdlib.h>
#define MAXN 102
#define MAXM 102
const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main() {
    int n, m;
    char map[MAXN][MAXM] = {'0'}, t;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if ((t = getchar()) == '\n')
                map[i][j] = getchar();
            else
                map[i][j] = t;
        }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (map[i][j] != '*') {
                int cnt = 0;
                for (int k = 0; k < 8; k++)
                    if (map[i + dx[k]][j + dy[k]] == '*')
                        cnt++;
                printf("%d", cnt);

            } else
                putchar('*');
        }
        putchar('\n');
    }

    return 0;
}