#include <stdio.h>
int main() {
    char a[14];     // contain the isbn code,including '\0'
    int sum = 0;    // sum of num
    int count = 1;  // location_n
    scanf("%s", a);
    for (int i = 0; i < 11; ++i) {
        if (a[i] == '-')
            continue;
        sum += (a[i] - 48) * count++;
    }
    int end = sum % 11;
    if ((a[12]) ==
        ((end == 10)
             ? 'X'
             : 48 + sum % 11))  // pay attention to the operating order， use
                                // parentheses '()' to ensure it.
        printf("Right\n");
    else {
        for (int i = 0; i < 12; ++i)
            printf("%c", a[i]);
        printf("%c\n", (end == 10) ? 'X' : 48 + sum % 11);
    }
}