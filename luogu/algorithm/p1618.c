#include <stdio.h>

#include <stdio.h>
int a[5];
int p[10];
int k;

/**
 * @param  n
 */
void asd(int n) {
    if (n % a[1]) return;
    int m, i, t;
    for (i = 1;i <= 9;i++) p[i] = 0;
    m = n / a[1];
    for (i = 1;i <= 3;i++) {
        n = m * a[i];
        while (n) {
            t = n % 10;
            if (p[t]) return;
            else p[t] = 1;
            n = n / 10;
        }
    }
    printf("%d %d %d\n", m * a[1], m * a[2], m * a[3]);
    if (!k) k = 1;
}

int main() {
    int i;
    scanf("%d%d%d", &a[1], &a[2], &a[3]);
    for (i = 100;i <= 333;i++) asd(i);
    if (!k) printf("No!!!");
    return 0;
}