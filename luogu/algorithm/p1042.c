#include <math.h>
#include <stdio.h>

int jz[2] = {11, 21};
int a[25 * 2500 + 10], n = 0;
int main() {
    char t;
    while ((t = getchar()) != 'E') {
        if (t == 'W')
            a[n++] = 1;
        else if (t == 'L')
            a[n++] = 0;
    }
    for (int i = 0; i < 2; i++) {
        int w = 0, l = 0;
        for (int j = 0; j < n; j++) {
            w += a[j];
            l += 1 - a[j];
            if ((w>l?w:l) >= jz[i] && fabs(w - l) >= 2) {
                printf("%d:%d\n", w, l);
                w = l = 0;
            }
        }
        printf("%d:%d\n\n", w, l);
    }
    return 0;
}