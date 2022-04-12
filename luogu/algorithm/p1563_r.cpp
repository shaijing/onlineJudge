/**
 * @File Name: p1563_r.cpp
 * @Brief : 
 * @Author : YuLing (yulingsc@outlook.com)
 * @Version : 1.0
 * @Creat Date : 2022-04-12
 * 
 */
#include <iostream>
#include <string>
using namespace std;
const int MAZN = 1e6 + 5;
struct node {
    int head;
    string name;
} a[MAZN];

int n, m, x, y;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i].head >> a[i].name;
    int now = 0;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        if (a[now].head == x)
            now = (now + n - y) % n;
        else
            now = (now + y) % n;
    }
    cout << a[now].name << endl;

    return 0;
}
