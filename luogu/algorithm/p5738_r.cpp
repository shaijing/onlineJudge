#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    float res = -1;
    while (n--) {
        float t = 0, minNum = 100, maxNum = -1;
        float ans = 0;
        for (int i = 0; i < m; i++) {
            cin >> t;
            ans += t;
            // 记录最大值和最小值
            minNum = min(t, minNum), maxNum = max(t, maxNum);
        }
        // 去掉两个最值
        ans -= minNum + maxNum;
        // 求平均分
        ans /= m - 2.0;
        // 更新最大的平均分
        res = max(ans, res);
    }
    // 输出答案
    printf("%.2f", res);
    return 0;
}