#include <bits/stdc++.h>//万能库
//#include <iostream>
using namespace std;
int main() {
    int n, score1, score2, sum = 0, max = 0, total = 0, x, i;
    char a, b;
    string name, maxn;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> name >> score1 >> score2 >> a >> b >> x;
        if (score1 > 80 && x > 0)  //判断是否获得院士奖学金
            sum += 8000;
        if (score1 > 85 && score2 > 80)  //判断是否获得五四奖学金
            sum += 4000;
        if (score1 > 90)  //判断是否获得成绩优秀奖
            sum += 2000;
        if (score1 > 85 && b == 'Y')  //判断是否获得西部奖学金
            sum += 1000;
        if (score2 > 80 && a == 'Y')  //判断是否获得班级贡献奖
            sum += 850;
        total += sum;                //累加奖学金
        if (sum > max)               //找出最牛学生
            maxn = name, max = sum;  // sum的用处
        sum = 0;
    }
    cout << maxn << endl << max << endl << total;
    return 0;
}