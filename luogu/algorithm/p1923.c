#include <stdio.h>
int a[5000001];
int n, k;
void fk(int[], int, int);
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    fk(a, 0, n - 1);
    printf("%d", a[k]);

    return 0;
}
void fk(int ar[], int l, int r) {
    if (l == r)
        return;
    int i = l, j = r, flag = ar[(r+l) / 2], temp;
    do {
        while (ar[i] < flag)
            i++;
        while (ar[j] > flag)
            j--;
        if (i <= j) {
            temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            i++, j--;
        }

    } while (i <= j);
    if (k <= j)
        fk(ar, l, j);
    else if (k >= i)
        fk(ar, i, r);
    else
        fk(ar, j + 1, i - 1);
}