#include <algorithm>
#include <iostream>
using namespace std;
typedef struct VOTE {
    int id;
    string num;
} vote;
vote v[10002];
bool cm(vote v1, vote v2);
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin>>v[i].num, v[i].id = i;
    sort(v, v + n, cm);
    cout << v[0].id+1 << endl << v[0].num << endl;
    return 0;
}

bool cm(vote v1, vote v2) {
    if (v1.num.length() != v2.num.length())
        return v1.num.length() > v2.num.length();
    return v1.num > v2.num;
}