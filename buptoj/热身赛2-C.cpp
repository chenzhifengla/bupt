
#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		if (n == 0) {
			printf("0\n");
			continue;
		}
		int sum = 1;
		for (int i = 0; i < n; i++) {
			while (n > 0) {
				if (n % 2 == 0) {
					sum *= 2;
				}
				n /= 2;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}

/*

#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if ((i ^ n) == (i + n)) {
				sum++;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
*/