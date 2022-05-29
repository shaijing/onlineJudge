#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[30] = {}, n, r;
    cin >> n >> r;
    for (int i = r + 1; i <= n; i++)
        a[i] = 1;
    do {
        for (int i = 1; i <= n; i++)
            if (a[i] == 0)
                printf("%3d", i);
        
        puts(" ");


    } while (next_permutation(a + 1, a + n + 1));

    return 0;
}