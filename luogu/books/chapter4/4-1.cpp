#include <bits/stdc++.h>
int MaxNumber(int number[], int n) {
    if (n >= 1) {
        if (MaxNumber(number, n - 1) > number[n])
            return MaxNumber(number, n - 1);
        else
            return number[n];
    } else
        return number[0];
}
int main() {
    int a[9] = {9, 8, 7, 6, 5, 4, 3, 21, 100};
    int number = MaxNumber(a, 8);
    printf("%d\n", number);
}