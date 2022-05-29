#include <bits/stdc++.h>

bool isPrime(int);
int main() {
    int l;
    std::cin >> l;
    int num = 2, sum = 0,n=0;
    while (true) {
        if (isPrime(num)) {
            sum += num;
            if (sum > l) {
                break;
            }
            else
            n++,printf("%d\n", num);
        }
        num++;
    }
    printf("%d\n", n);

    return 0;
}
bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}