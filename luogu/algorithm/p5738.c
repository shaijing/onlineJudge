#include <stdio.h>
#include <stdlib.h>
int mycmp(const void*, const void*);

int main() {
    int m, n;
    int score[100][20]={0};
    int res[100]={0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &score[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        qsort(score[i], m, sizeof(int), mycmp);
        for (int j = 1; j < m - 1; j++)
            res[i] += score[i][j];
    }

    qsort(res, n, sizeof(int), mycmp);
    printf("%.2f\n", (float)res[0] / (m - 2));
    return 0;
}
int mycmp(const void* p1, const void* p2) {
    return *(int*)p2 - *(int*)p1;
}
