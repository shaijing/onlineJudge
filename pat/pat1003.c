#include <stdio.h>
int main() {
    int num[2][2] = {{1, 2}, {3, 4}};
    printf("num:%p, num[0]:%p, num[0][1]:%p", num+1, num[1], &num[1][0]);
    getchar();
    return 0;
}