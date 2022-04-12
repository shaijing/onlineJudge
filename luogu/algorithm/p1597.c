#include <stdio.h>
#include <string.h>
int main() {
    int num[3] = {0};
    char s1 = '\0', s2 = '\0';
    while (scanf("%c:=%c;", &s1, &s2) == 2)
        num[s1 - 'a'] = s2 >= '0' && s2 <= '9' ? s2 - '0' : num[s2 - 'a'];
    printf("%d %d %d", num[0], num[1], num[2]);

    return 0;
}