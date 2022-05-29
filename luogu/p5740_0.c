#include <stdio.h>
#include <stdlib.h>
//P5740 【深基7.例9】最厉害的学生
typedef struct student {
    char name[9];
    int ch;
    int ma;
    int en;
    int su;
} stu;
int mycmp(const void*, const void*);
int main() {
    stu stus[1000];
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {

        scanf("%s %d %d %d", stus[i].name, &stus[i].ch, &stus[i].ma, &stus[i].en);
        stus[i].su = stus[i].ch + stus[i].ma + stus[i].en;
        getchar();
    }
    qsort(&stus[0], n,sizeof(stu), mycmp);
    printf("%s %d %d %d\n", stus[0].name, stus[0].ch, stus[0].ma, stus[0].en);

    return 0;
}
int mycmp(const void* p1, const void* p2) {
    stu* ptr1 = (stu*)p1;
    stu* ptr2 = (stu*)p2;
    if (ptr1->su > ptr2->su) {
        return -1;
    } else if (ptr1->su == ptr2->su)
        return 0;
    else
        return 1;
}