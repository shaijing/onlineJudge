#include <bits/stdc++.h>

using namespace std;


int main() {
    map<int, int> m;
    for (int i = 0; i < 10; i++) {
        m[i] = 10 - i;
    }
    printf("Map total pairs: %d\n", m.size());
    for (const auto& p : m) {
        cout << p.first << " : " << p.second << endl;
    }
    printf("Map is empty:  %d\n", m.empty());
    m.clear();
    printf("Map is empty:  %d\n", m.empty());


    return 0;
}