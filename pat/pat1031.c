#include <stdio.h>
int ap[100][1];
int we[18] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char ch[12] = { '1','0','X','9','8','7','6','5','4','3','2' };
char num[100][19];
int r[100];
int isvalid(const char*);

int main() {

    int n;
    int count = 0;
    scanf("%d", &n);
    while (getchar() != '\n')
        continue;

    for (int i = 0; i < n; i++) {
        scanf("%s", num[i]);
        while (getchar() != '\n') continue;

        if (!isvalid(num[i])) 
            r[count++] = i;
    }

    if (count) {

        for (int i = 0; i < count; i++) {
            printf("%s\n", num[r[i]]);
        }
    }
    else
        puts("All passed");
    return 0;
}

int isvalid(const char* s) {
    int sum = 0, res = 1;
    for (int j = 0; j < 17; j++) {

        if (s[j] < '0' || s[j]>'9')
            res = 0;
        sum += (s[j] - '0') * we[j];

    }
    sum %= 11;
    if (s[17] != ch[sum])
        res = 0;
    return res;
}