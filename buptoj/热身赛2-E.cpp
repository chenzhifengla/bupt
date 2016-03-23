#include<stdio.h>
#define M 1000000007
int main() {
	long long buf[2001];
	buf[1] = 1;
	for (int i = 2; i <= 2000; i++) {
		int x = i * (i + 1) / 2;
		int y = i * (i - 1) / 2;
		long long z = 1;
		for (int j = y + 1; j <= x - 1; j++) {
			z *= j;
			z %= M;
		}
		buf[i] = (buf[i - 1] * i) % M;
		buf[i] = (buf[i] * z) % M;
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", buf[n]);
	}
	return 0;
}