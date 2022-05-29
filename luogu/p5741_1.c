#include <math.h>
#include <stdio.h>
#include <string.h>
typedef struct stud {
    char na[9];
    int ch;
    int ma;
    int en;
    int sum;
} stu;

int main() {
    stu s[1000];
    int n, i, j;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        scanf("%s %d %d %d", s[i].na, &s[i].ch, &s[i].ma, &s[i].en);
        s[i].sum = s[i].ch + s[i].ma + s[i].en;
    }
    for (i = 0; i < n - 1; i++)
        for (j = i; j < n - 1; j++) {
            if (fabs(s[i].ch - s[j + 1].ch) <= 5 &&
                fabs(s[i].ma - s[j + 1].ma) <= 5 &&
                fabs(s[i].en - s[j + 1].en) <= 5 &&
                fabs(s[i].sum - s[j + 1].sum) <= 10)
                if (strcmp(s[i].na, s[j + 1].na) < 0) {
                    printf("%s %s\n", s[i].na, s[j + 1].na);

                } else {
                    printf("%s %s\n", s[j + 1].na, s[i].na);
                }
        }

    return 0;
}