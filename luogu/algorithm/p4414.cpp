#include <bits/stdc++.h>
int main() {
    int max, min, sum;
    int num[3];
    char ch[3] = {'\0'};
    scanf("%d%d%d", &num[0], &num[1], &num[2]);
    while (getchar() != '\n')
        ;
    scanf("%c%c%c", &ch[0], &ch[1], &ch[2]);
    sum = num[0] + num[1] + num[2];
    max = num[0], min = num[2];
    for (int i = 0; i < 3; i++) {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }
    num[0] = min;
    num[2] = max;
    num[1] = sum - max - min;
    printf("%d %d %d", num[ch[0] - 'A'], num[ch[1] - 'A'], num[ch[2] - 'A']);
    return 0;
}