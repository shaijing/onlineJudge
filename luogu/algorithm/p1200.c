#include <stdio.h>

int main() {
    int a = 1, b = 1;
    char v;
    while ((v = getchar()) != '\n')
        a *= v - 'A' + 1;
    while ((v = getchar()) != '\n')
        b *= v - 'A' + 1;
    if (a % 47 == b % 47)
        puts("Go");
    else
        puts("STAY");
    return 0;
}