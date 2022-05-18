#include <stdio.h>
int a1[2000002];
int main() {
    int n, m, t;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d", &t);
        a1[t]++;
    }
    for (int i = 1; i <= n; i++)
        while (a1[i]--)
            printf("%d ", i);

    return 0;
}