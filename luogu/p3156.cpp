#include <bits/stdc++.h>
using namespace std;

int n, m, temp;
int main() {

    vector<int> stu;
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        cin >> temp;
        stu.push_back(temp);
    }
    for (int i = 0; i < m; i++) {
        cin >> temp;
        cout << stu[temp - 1] << endl;
    }

    return 0;
}
