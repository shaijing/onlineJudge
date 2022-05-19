#include <stdio.h>
#include <stdlib.h>
//P1051 [NOIP2005 提高组] 谁拿了最多奖学金
typedef struct student {
    char name[21];
    int final_grade;
    int class_grade;
    char isChair;
    char isWest;
    int paper;
    int bonus;
} stu;

int mycmp(const void*, const void*);
int main() {
    int n;
    scanf("%d", &n);
    while (getchar() != '\n')
        continue;
    stu stus[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d  %c %c %d", stus[i].name, &stus[i].final_grade,
            &stus[i].class_grade, &stus[i].isChair, &stus[i].isWest,
            &stus[i].paper);
        stus[i].bonus = 0;
        while (getchar() != '\n')
            continue;
    }
    int total;
    int i;
    for (i = 0; i < n; i++) {
        if (stus[i].final_grade > 80 && stus[i].paper >= 1)
            stus[i].bonus += 8000;

        if (stus[i].final_grade > 85 && stus[i].class_grade > 80)
            stus[i].bonus += 4000;

        if (stus[i].final_grade > 90)
            stus[i].bonus += 2000;

        if (stus[i].final_grade > 85 && stus[i].isWest == 'Y')
            stus[i].bonus += 1000;

        if (stus[i].class_grade > 80 && stus[i].isChair == 'Y')
            stus[i].bonus += 850;

        total += stus[i].bonus;
    }
    qsort(&stus[0], n, sizeof(stu), mycmp);
    printf("%s\n%d\n%d", stus[0].name, stus[0].bonus, total);
    return 0;
}
int mycmp(const void* p1, const void* p2) {
    stu* s_1 = (stu*)p1;
    stu* s_2 = (stu*)p2;
    const int b_1 = s_1->bonus;
    const int b_2 = s_2->bonus;
    if (b_1 < b_2)
        return 1;
    else if (b_1 == b_2)
        return 0;
    else
        return -1;
}