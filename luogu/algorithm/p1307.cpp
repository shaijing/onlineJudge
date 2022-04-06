#include <bits/stdc++.h>
int main() {
    char num[12];
    std::cin >> num;
    int n = strlen(num);
    bool in = false;
    if (num[0] == '0') {
        std::cout << "0\n";
        return 0;
    }
    if (num[0] == '-') {
        putchar('-');
        for (int i = n - 1; i >= 1; --i) {
            if (num[i] != '0' || in == true)
                in = true, putchar(num[i]);
        }
    } else {
        for (int i = n - 1; i >= 0; --i) {
            if (num[i] != '0'|| in == true)
                in = true,putchar(num[i]);
        }
    }

    return 0;
}