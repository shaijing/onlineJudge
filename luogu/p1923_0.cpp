#include<bits/stdc++.h>
using namespace std;
long long a[5000010];//一定要设全局变量 
inline int read() {	//快读 
	char ch = getchar();
	int x = 0, f = 1;
	while (ch < '0' || ch>'9') {
		if (ch == '-') f = -1;
		ch = getchar();
	}
	while ('0' <= ch && ch <= '9') {
		x = x * 10 + ch - '0';
		ch = getchar();
	} return x * f;
}
int quicksort(int left, int right) {
	int mid = a[left];
	while (left < right) {
		while (left < right && mid <= a[right])
			right--;
		a[left] = a[right];
		while (left < right && a[left] <= mid)
			left++;
		a[right] = a[left];
	}
	a[left] = mid;
	return left;
}
int find(int left, int right, int k) {
	int tem = quicksort(left, right);
	if (k == tem)
		printf("%d", a[k]);
	else if (k - 1 < tem)
		find(left, tem - 1, k);
	else
		find(tem + 1, right, k);
	return 0;
}
int main() {
	int n, k;
	n = read();
	k = read();
	for (int i = 0;i < n;i++)
		a[i] = read();
	find(0, n - 1, k);
	return 0;
}