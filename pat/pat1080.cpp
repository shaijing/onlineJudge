#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    string id = "";
    int g_p;
    int g_mid;
    int g_fin;
    int g;
    Student() {
        id = "";
        g_p = -1;
        g_mid = -1;
        g_fin = -1;
        g = 0;

    };
    void cal() {
        if (g_mid > g_fin)
            g = round(0.4 * g_mid + 0.6 * g_fin);
        else
            g = g_fin;
    }
};
inline bool cmp(Student p1, Student p2) {
    if (p1.g != p2.g)
        return p1.g > p2.g;
    else
        return p1.id < p2.id;
}

int main() {
    unordered_map<string, Student> mp;
    vector<Student> l;
    int p, m, n;
    cin >> p >> m >> n;
    for (int i = 0;i < p;i++) {
        string id;
        int t;
        cin >> id >> t;
        if (t >= 200) {
            mp[id].id = id;
            mp[id].g_p = t;
        }
    }
    for (int i = 0;i < m;i++) {
        string id;
        cin >> id;

        mp[id].id = id;
        cin >> mp[id].g_mid;
    }
    for (int i = 0;i < n;i++) {
        string id;
        cin >> id;

        mp[id].id = id;
        cin >> mp[id].g_fin;
        mp[id].cal();

    }
    for (auto& s : mp) {
        if (s.second.g >= 60 && s.second.g_p >= 200)
            l.push_back(s.second);
    }
    sort(l.begin(), l.end(), cmp);


    for (int i = 0;i < l.size();i++) {
        cout
            << l[i].id << " "
            << l[i].g_p << " "
            << l[i].g_mid << " "
            << l[i].g_fin << " "
            << l[i].g
            << endl;
    }


}