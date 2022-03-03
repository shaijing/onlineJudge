#include <stdio.h>
typedef struct stud {
    char name[11];
    char info[11];
    int grade;
} student;
int main() {
    int n;
    scanf("%d", &n);
    student stu[n], temp;
    for (int i = 0; i < n; i++) {
        /* code */
        while (getchar() != '\n')
            continue;
        scanf("%s %s %d", stu[i].name, stu[i].info, &stu[i].grade);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (stu[j].grade < stu[j + 1].grade) {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
    printf("%s %s\n", stu[0].name, stu[0].info);
    printf("%s %s\n", stu[n - 1].name, stu[n - 1].info);

    return 0;
}