/**
 * @File Name: p1563.c
 * @Brief :
 * @Author : YuLing (yulingsc@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-04-12
 *
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct people {
    int direction;
    char name[11];
} pe;
typedef struct order {
    int direction, count;
} or ;
pe in_pe[100001];
or in_or;
int main() {
    int n, m;
    int my_order = 0;
    scanf("%d %d", &n, &m);
    // pe* in_pe = (pe*)malloc(sizeof(pe) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &in_pe[i].direction, in_pe[i].name);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &in_or.direction, &in_or.count);
        if (in_or.direction == in_pe[my_order].direction)
            my_order = (my_order + n - in_or.count) % n;
        else
            my_order = (my_order + in_or.count) % n;
    }
    printf("%s\n", in_pe[my_order].name);
    // free(in_pe);

    return 0;
}