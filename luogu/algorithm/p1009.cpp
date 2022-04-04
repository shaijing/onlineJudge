#include <iostream>
int main() {
    int n;
    unsigned long long res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        unsigned long long fa = 1;
        for (int j = 1; j <= i; j++) {
            fa *= j;
        }
        res += fa;
    }
    std::cout<<res;
    return 0;
}
