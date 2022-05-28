#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char** letterCombinations(char* digits, int* returnSize);
int main() {



    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int haopengyou(char c) {
    if (c == '7') return 4;
    if (c == '9') return 4;
    return 3;
}
char** letterCombinations(char* digits, int* returnSize) {
    int l = strlen(digits), i, j, interval;
    char** ans, se[8][5] = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
    if (l == 0) {
        *returnSize = 0;
        return NULL;
    }
    *returnSize = 1;
    for (i = 0;i < l;i++) (*returnSize) *= haopengyou(digits[i]);
    ans = (char**)malloc((*returnSize) * sizeof(char*));
    interval = *returnSize;
    for (i = 0;i < (*returnSize);++i) {
        *(ans + i) = (char*)malloc((l + 1) * sizeof(char));
        ans[i][l] = '\0';
    }
    for (i = 0;i < l;++i) {
        interval /= haopengyou(digits[i]);
        for (j = 0;j < (*returnSize);++j) {
            ans[j][i] = se[digits[i] - '2'][(j / interval) % haopengyou(digits[i])];
        }
    }
    return ans;
}
