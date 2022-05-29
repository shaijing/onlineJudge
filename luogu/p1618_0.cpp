#include<bits/stdc++.h>
using namespace std;
int a[9] = { 1,2,3,4,5,6,7,8,9 };
int main() {
    int A, B, C, h = 0;
    cin >> A >> B >> C;
    int i, j, k;
    
    do {
        i = 100 * a[0] + 10 * a[1] + a[2];
        j = 100 * a[3] + 10 * a[4] + a[5];
        k  = 100 * a[6] + 10 * a[7] + a[8];
        if (i * B == j * A && i * C == k * A) {
            cout << i << " " << j << " " << k << endl;
            h++;
        }


    } while (next_permutation(a, a + 9));

    if (h == 0)

        cout << "No!!!";
    return 0;
}