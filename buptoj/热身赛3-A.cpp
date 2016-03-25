#include <stdio.h>
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int x;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
		}
		if (n % 2 == 0) {
			printf("0.500000\n");
		}
		else {
			printf("0.000000\n");
		}
	}
	return 0;
}