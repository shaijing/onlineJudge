#include <stdc.h>

static int cmp(const void* p1, const void* p2);
int main(int argc, char** argv) {
    int num[10] = { 6,8,9,1,3,5,4,2,0,7 };
    qsort(num, 10, sizeof(int),cmp);
    for (int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

/**
  @param p1
  @param p2
  @return -1 不交换位置; 1 交换位置;

 */
static int cmp(const void* p1, const void* p2) {
    if (*(int*)p1 > *(int*)p2)
        return -1;
    else if (*(int*)p2 == *(int*)p1)
        return 0;
    else
        return 1;
}