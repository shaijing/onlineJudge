#include <stdio.h>
#include <math.h>

int num[101];
int main() {
	int n, l;
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0, w = l;i < n;i++, l--) {
		if (l > n)
			l %= n;
		w = abs(n - l) % n;
		printf("%d", num[w]);
		if (i < n - 1)
			putchar(' ');

	}
	puts("");

	return 0;
}
