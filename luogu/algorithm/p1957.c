#include<stdio.h>
#include<string.h>
int main() {
    int n, num1, num2, res;
    char op, s[20], ans[20];
    scanf("%d\n", &n);
    while (n--) {
        fgets(s, sizeof(s), stdin);
        if (s[0] == 'a' || s[0] == 'b' || s[0] == 'c')
            op = s[0], s[0] = ' ';
        sscanf(s, "%d %d", &num1, &num2);
        switch (op) {
            case 'a':
                res = num1 + num2;
                sprintf(ans, "%d+%d=%d", num1, num2, res);
                break;
            case 'b':
                res = num1 - num2;
                sprintf(ans, "%d-%d=%d", num1, num2, res);
                break;
            case 'c':
                res = num1 * num2;
                sprintf(ans, "%d*%d=%d", num1, num2, res);
                break;
        }
        printf("%s\n%ld\n", ans, strlen(ans));
    }

    return 0;
}