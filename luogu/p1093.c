#include <stdio.h>
#include <stdlib.h>
//P1093 [NOIP2007 普及组] 奖学金
typedef struct stud {
    int id;
    int ch;
    int ma;
    int en;
    int sum;
} stu;

int mycmp(const void*, const void*);
int main() {
    int n, i;
    stu st[301];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &st[i].ch, &st[i].ma, &st[i].en);
        st[i].sum = st[i].ch + st[i].ma + st[i].en;
        st[i].id = i + 1;
    }
    qsort(&st[0], n, sizeof(stu), mycmp);
    for (i = 0; i < 5; i++) {
        printf("%d %d\n", st[i].id, st[i].sum);
    }

    return 0;
}
int mycmp(const void* p1, const void* p2) {
    const stu* ptr1 = (stu*)p1;
    const stu* ptr2 = (stu*)p2;
    if (ptr1->sum > ptr2->sum) {
        return -1;
    }
    else if (ptr1->sum == ptr2->sum) {
        if (ptr1->ch >= ptr2->ch) {
            return -1;
        }
        else
            return 1;
    }
    else
        return 1;
}
