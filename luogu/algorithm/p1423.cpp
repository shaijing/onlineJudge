#include <bits/stdc++.h>
int main() {
    int n = 1;
    double s, v = 2, res = 2;
    std::cin >> s;
    while (res <= s) {
        v = 0.98 * v;
        res += v;
        n++;
    }
    printf("%d\n", n);

    return 0;
}