#include<bits/stdc++.h>
using namespace std;
int a[9] = { 1,2,3,4,5,6,7,8,9 };
int main() {
    int i = 0;

    do {
        printf("{ %d, %d, %d, %d, %d, %d, %d, %d, %d }\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
        i++;

    } while (next_permutation(a, a + 9) && i <= 100);

    return 0;
}