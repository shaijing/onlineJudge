#include<bits/stdc++.h>
using namespace std;
int x[5000005], k;
int main() {
    int n;
    scanf("%d%d", &n, &k);
    for (int i = 0;i < n;i++)
        scanf("%d", &x[i]);
    nth_element(x, x + k, x + n);//简短又高效 //nth_element(数组名,数组名+第k小元素,数组名+元素个数)
    printf("%d", x[k]);
}