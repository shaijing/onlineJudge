#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
char* addBinary(char* a, char* b);

int main(int argc, char** argv) {
    char* ptr = addBinary("0", "0");
    printf("%s\n", ptr);
    free(ptr);
    return 0;
}
char* addBinary(char* a, char* b) {
    int carry = 0;
    int lena = strlen(a);
    int lenb = strlen(b);
    int len = lena>lenb?lena:lenb;
    int i = lena - 1;
    int j = lenb - 1;
    char* res = (char*)calloc(len + 2, sizeof(char)); /* 长度可能是更长的字符串加1 */
    int k = len + 1;
    res[k--] = '\0'; /* 添加结束符 */

    /* 模拟加法处理 */
    while (i >= 0 || j >= 0 || carry > 0) {
        carry += (i >= 0) ? a[i--] - '0' : 0;
        carry += (j >= 0) ? b[j--] - '0' : 0;
        res[k--] = carry % 2 + '0';
        carry /= 2;
    }

    return res+k+1;
}