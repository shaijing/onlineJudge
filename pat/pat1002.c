#include <stdio.h>
#include <string.h>

int ctoi(char);
int main(void) {
    char name[10][10] = {"ling", "yi",  "er", "san", "si",
                         "wu",   "liu", "qi", "ba",  "jiu"};
    char num_l[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char num_str[100];
    char sum_str[10];
    char res[10] = "";
    int sum = 0;
    unsigned long long num_n, i, j;
    scanf("%s", num_str);
    num_n = strlen(num_str);
    for (i = 0; i < num_n; ++i) {
        sum += ctoi(num_str[i]);
    }
    sprintf(sum_str, "%d", sum);
    for (i = 0; i < strlen(sum_str); ++i) {
        for (j = 0; j < strlen(num_l); ++j) {
            if (sum_str[i] == num_l[j]) {
                if (i != strlen(sum_str) - 1) {
                    strcat(res, name[j]);
                    strcat(res, " ");
                } else {
                    strcat(res, name[j]);
                }
            }
        }
    }
    printf("%s\n", res);
    return 0;
}
int ctoi(char ch) {
    return (int)(ch)-48;
}