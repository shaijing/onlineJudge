#include <bits/stdc++.h>
using namespace std;
int main() {
    char s[100];
    int maxn = 0, minn = 101, num[26] = {0};
    cin >> s;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        num[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (num[i] > maxn)
            maxn = num[i];
        if (num[i] < minn && num[i] != 0)
            minn = num[i];
    }
    int n = maxn - minn;
    if (n == 0 || n == 1) {
        printf("No Answer\n0\n");
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % 2 == 0) {
            printf("No Answer\n0\n");
            return 0;
        }
    }
    printf("Lucky Word\n%d\n", n);
    return 0;
}