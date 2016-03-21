#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int x;
			scanf("%d", &x);
			sum += x;
		}
		if (sum > 0) {
			printf("You are smart!\n");
		}
		else printf("You are beautiful!\n");
	}
	return 0;
}