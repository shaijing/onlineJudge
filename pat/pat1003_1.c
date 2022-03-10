#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool judge(char*);

int main() {//耗时太长，错误
    int n;
    bool isRight;
    scanf("%d", &n);
    getchar();            // remove \n
    char str[n][10], ch;  // local variables will not be initialized as 0.
    char res[30] = "";
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        isRight = judge(str[i]);
        if (isRight)
            strcat(res, "Yes\n");
        else
            strcat(res, "No\n");
        while ((ch = getchar()) != '\n')
            ;
    }
    puts(res);
    return 0;
}

bool judge(char* ptr) {
    unsigned long long lens = strlen(ptr);
    char* p = strchr(ptr, 'P');
    char* t = strchr(ptr, 'T');
    int a[3] = {0, 0, 0};
    if (p == NULL || t == NULL)
        return false;
    if ((t - p) < 2)
        return false;
    for (int i = 0; i < lens; i++) {
        if (*(ptr + i) == ' ' || *(ptr + i) == 'A' || *(ptr + i) == 'P' ||
            *(ptr + i) == 'T')
            continue;
        else
            return false;
    }

    for (int i = 0; (ptr + i) < p; i++) {
        if (*(ptr + i) == 'A' || *(ptr + i) == ' ')
            a[0]++;
    }
    for (int i = 1; (p + i) < t; i++) {
        if (*(p + i) == 'A' || *(p + i) == ' ')
            a[1]++;
    }
    for (int i = 1; (t + i) <= (ptr + lens - 1); i++) {
        if (*(t + i) == 'A' || *(t + i) == ' ')
            a[2]++;
    }
    if (a[0] == a[2] && a[1] != 0)
        return true;
    else if (a[1] == 2 && 2 * a[0] == a[2])
        return true;
    else
        return false;
}