#include <stdio.h>
#include <math.h>

int c(int m, int n) {
	long long result = 1;
	for (int i = m - n + 1; i <= m; i++) {
		result *= i;
	}
	for (int i = 1; i <= n; i++) {
		result /= i;
	}
	return (int)result;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k;
		scanf("%d%d", &n, &k);
		int buf[31];
		for (int i = 1; i <= n; i++) {
			int x;
			buf[i] = 0;
			for (int j = 1; j <= n; j++) {
				scanf("%d", &x);
				if (x == 1) {
					buf[i]++;
				}
			}
		}
		double sum = 0;
		for (int i = 1; i <= n; i++) {
			int len = buf[i];
			int fenzi = 0;
			for (int j = k; j <= len; j++) {
				fenzi += c(len, j);
			}
			int fenmu = (int)pow(2, len);
			sum += (double)fenzi / 2 / (double)fenmu;
		}
		printf("%.3lf\n", sum);
	}
	return 0;
}