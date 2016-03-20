#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int buf[101];
		for (int i = 1; i <= n; i++) {
			scanf("%d", &buf[i]);
		}
		if ((n & 1) == 0) {
			printf("%g\n", (float)(buf[n >> 1] + buf[(n >> 1) + 1]) / 2);
		}
		else {
			printf("%d\n", buf[(n >> 1) + 1]);
		}
	}
	return 0;
}