#include <stdc.h>

int permutation_num(int m, int n);

int combination_num(int m, int n);

int mark[5000];
int main() {
    printf("%d %d", permutation_num(5, 2), combination_num(5, 2));

    return 0;
}

int permutation_num(int m, int n) {
    if (n == 1)
        return m;
    return m * permutation_num(m - 1, n - 1);
}
int combination_num(int m, int n) {
    if (n == 1)
        return m;
    return m * combination_num(m - 1, n - 1) / n;
}
int binary_search(int* arr_start, int* arr_end, int num);
int binary_search(int* arr_start, int* arr_end, int num) {
    int* start = arr_start;
    int* end = arr_end;
    while (start <= end) {
        int* mid = start + (end - start) / 2;
        // printf("start:%d end:%d mid:%d", *start, *end, *mid);
        if (*mid == num)
            return (mid - arr_start) + 1;
        else if (*mid > num)
            end = mid - 1;
        else
            start = mid + 1;

    }
    return -1;
}