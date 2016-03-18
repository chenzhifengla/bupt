#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	int prime[11] = { 2, 3, 5, 7, 11, 13, 15, 17, 19, 23, 29 };
	while (t--) {
		int n;
		scanf("%d", &n);
		int i;
		for (i = 0; i < 11; i++) {
			if (prime[i] >= n) break;
		}
		printf("%d\n", i);
	}
	return 0;
}