#include <bits/stdc++.h>

using namespace std;

int num[200001];
map<int, int> ds;
int main() {
    long long ans=0;
    int n, c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        ds[num[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        ans += ds[num[i] - c];
    }
    cout << ans << endl;
    




    return 0;
}