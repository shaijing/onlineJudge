#include <stdio.h>
#include <string.h>
#define MAXN 2
#define MAXLEN 503
char num_str[MAXN][MAXLEN];

int add_int(char*, char*, int*);

int main() {
    char t;
    int id = 0;
    int num[MAXLEN] = {0};
    scanf("%s %s", num_str[0], num_str[1]);
    int len = add_int(num_str[0], num_str[1], num);
    for (int i = 0; i < len; i++)
        printf("%d", num[i]);

    return 0;
}


int add_int(char* num_str_1, char* num_str_2, int* num3) {
    int len = strlen(num_str_1) > strlen(num_str_2) ? strlen(num_str_1)
                                                    : strlen(num_str_2);
    int num1[MAXLEN] = {0}, num2[MAXLEN] = {0}, t[MAXLEN]={0};
    for (int i = strlen(num_str_1) - 1, j = 0; i >= 0; i--, j++) {
        num1[j] = num_str_1[i] - '0';
    }
    for (int i = strlen(num_str_2) - 1, j = 0; i >= 0; i--, j++) {
        num2[j] = num_str_2[i] - '0';
    }

    for (int i = 0; i < len; i++) {
        t[i] += num1[i] + num2[i];
        t[i + 1] = t[i] / 10;
        t[i] %= 10;
    }
    if (t[len])
        len++;
    for (int i = len - 1, j = 0; i >= 0; i--, j++)
        num3[j] = t[i];

    return len;
}