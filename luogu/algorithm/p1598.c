#include <stdio.h>

int main() {
    int num[26] = {0};
    int n = 4, max = 0;
    char ch;
    while (n) {
        ch = getchar();
        if (ch == '\n')
            n--;
        if (ch == EOF)
            break;
        if ('A' <= ch && ch <= 'Z') {
            num[ch - 'A']++;
            if (num[ch - 'A'] > max)
                max = num[ch - 'A'];
        }
    }
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 26; j++) {
            if (i < max - num[j])
                putchar(' ');
            else
                putchar('*');
            if (j < 25)
                putchar(' ');
        }
        putchar('\n');
    }
    for (int i = 0; i < 26; i++) {
        putchar('A' + i);
        if (i < 25)
            putchar(' ');
    }

    return 0;
}