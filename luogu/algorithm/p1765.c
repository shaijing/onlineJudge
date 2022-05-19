#include <stdio.h>

int main() {
    int sum = 0, i, n;
    char x, a[9] = { 'a', 'd', 'g', 'j', 'm', 'p', 't', 'w', 'z' + 1 };
    while ((x = getchar()) != '\n') {
        if (x == ' ')
            sum++;
        if ('a' <= x && x <= 'z') {
            for (i = 0; x >= a[i + 1]; i++)
                continue;
            sum += x - a[i] + 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}