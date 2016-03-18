#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int j = 0; j < t; j++) {
		int n;
		scanf("%d", &n);
		int even = 0;
		int odd = 0;
		int num;
		for (int i = 0; i < n; i++) {
			scanf("%d", &num);
			if (num & 1) odd += num;
			else even += num;
		}
		printf("%d %d\n", odd, even);
	}
	return 0;
}