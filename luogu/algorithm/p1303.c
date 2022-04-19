#include <stdio.h>
#include <string.h>
#define MAXN 5010
int mutiplaly(char*, char*, int*);

int main() {
    char str1[MAXN] = {0}, str2[MAXN] = {0};
    int num[MAXN] = {0};
    scanf("%s %s", str1, str2);
    int len = mutiplaly(str1, str2, num);
    for (int i = 0; i < len; i++) {
        printf("%d", num[i]);
    }

    return 0;
}
int mutiplaly(char* num0_str, char* num1_str, int* num) {
    int num0[MAXN] = {0}, num1[MAXN] = {0}, t_num[MAXN] = {0};
    int len, len0, len1;
    len0 = strlen(num0_str);
    len1 = strlen(num1_str);
    len = len0 + len1;
    if((len0==1&&num0_str[0]-'0'==0)||(len1==1&&num1_str[0]-'0'==0)){//注意==号
        num[0] = 0;
        return 1;
    }
    // to int array
    for (int i = 0, j = len0 - 1; j >= 0; i++, j--) {
        num0[i] = num0_str[j] - '0';
    }
    for (int i = 0, j = len1 - 1; j >= 0; i++, j--) {
        num1[i] = num1_str[j] - '0';
    }
    // operation
    for (int i = 0; i < len0; i++)
        for (int j = 0; j < len1; j++) {
            t_num[i + j] += num0[i] * num1[j];
        }

    for (int i = 0; i < len; i++) {
        t_num[i + 1] += t_num[i] / 10;
        t_num[i] %= 10;
    }
    //此处可排除乘数为0情况，但判断次数较多，可在开始便排除
    while (!t_num[len])
        len--;
    for (int i = 0, j = len; j >= 0; j--, i++) {
        num[i] = t_num[j];
    }

    return len+1;
}