#include <stdbool.h>
#include <stdio.h>
bool isPrime(long);
int main() {
    int n;
    scanf("%d", &n);
    long num[n];
    for (int i = 0; i < n; i++) {
        scanf("%ld", &num[i]);
    }
    for (int i = 0; i < n; i++) {
        if(isPrime(num[i]))
            printf("%ld ",num[i]);
    }
    return 0;
}
bool isPrime(long n) {
    bool res = true;
    if(n<2)
	{
		return 0;//小于2的0和1绝对不是
	}
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            res = false;
            break;
        }
    }
    return res;
}