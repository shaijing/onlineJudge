#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* addBinary(char* a, char* b);

int main(int argc, char** argv) {
    printf("%s\n", addBinary("11", "1110"));
    return 0;
}
char* addBinary(char* a, char* b) {
    const int MAXN = 10000;
    int a1[MAXN], b1[MAXN], c[MAXN];

    int a_len = strlen(a);
    int b_len = strlen(b);
    int res_len = a_len > b_len ? a_len : b_len;
    char* res = (char*)calloc(res_len + 1, sizeof(char));
    for (int i = a_len - 1, j = 0;i >= 0;i--, j++)
        a1[j] = a[i] - '0';

    for (int i = b_len - 1, j = 0;i >= 0;i--, j++)
        b1[j] = b[i] - '0';
    for (int i = 0; i < res_len; i++) {
        c[i] += a1[i] + b1[i];
        c[i + 1] = (c[i] == 2 ? 1 : 0);
        c[i] = (c[i] == 2 ? 0 : 1);

    }
    if (c[res_len])
        res_len++;
    for (int i = res_len - 1, j = 0; i >= 0; i--, j++) {
        res[j] = c[i] + '0';
    }
    return res;


}