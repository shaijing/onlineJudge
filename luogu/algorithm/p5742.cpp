#include <bits/stdc++.h>
#define MAXN 1024
using namespace std;

typedef struct student {
    int id, gr, e_gr;
    double f_gr;
    student(int _id, int _ac, int _qu) {
        this->id = _id;
        this->gr = _ac;
        this->e_gr = _qu;
        this->f_gr = 0.7 * _ac + 0.3 * _qu;
    }
    student(){};
    int sum() {
        return this->gr + this->e_gr;
    }
} stu;
int is_exc(stu s) {
    return s.f_gr >= 80 && s.sum() > 140;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t_id, t_ac, t_qu;
        cin >> t_id >> t_ac >> t_qu;
        stu t(t_id, t_ac, t_qu);
        if (is_exc(t))
            puts("Excellent");
        else
            puts("Not excellent");
    }

    return 0;
}