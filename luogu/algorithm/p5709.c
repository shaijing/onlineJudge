#include <math.h>
#include <stdio.h>
int main() {
    unsigned int m, t, s;
    scanf("%u %u %u", &m, &t, &s);
    if (t == 0) {
        printf("0\n");
        return 0;
    }
    int r = (unsigned int)(m - ceil((double)s / t));
    if (r <= 0)
        printf("0");
    else
        printf("%u", r);
    return 0;
}