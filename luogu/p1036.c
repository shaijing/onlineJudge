#include <stdio.h>
int isPrime(int);

int main(int argc, char** argv) {
    int a[30] = { 0 };

    int n, k, ans = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0;i < n;i++)
        scanf("%d", &a[i]);
    int U = 1 << n;
    for (int j = 0;j < U;j++) {
        if (__builtin_popcount(j) == k) {
            int sum = 0;
            for (int m = 0;m < n;m++)
                if (j & (1 << m))
                    sum += a[m];
            if (isPrime(sum))
                ans++;
        }
    }
    printf("%d", ans);

    return 0;
}


int isPrime(int num) {
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return 0;
    return 1;

}

char poptable[256] =
{
0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4,
1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6,
3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7,
4, 5, 5, 6, 5, 6, 6, 7, 5, 6, 6, 7, 6, 7, 7, 8
};
unsigned __builtin_popcount(unsigned u) {
    return poptable[u & 0xFF] + poptable[(u >> 8) & 0xFF] + poptable[(u >> 16) & 0xFF] + poptable[(u >> 24) & 0xFF];
}