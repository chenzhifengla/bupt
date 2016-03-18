#include <stdio.h>
#include <math.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		int max, min;
		if (a == b) {
			printf("1/%d\n", (int)pow(2, a - 1));
			continue;
		}
		else if (a > b) {
			max = a;
			min = b;
		}
		else {
			max = b;
			min = a;
		}
		printf("%d/%d\n", (int)pow(2, max - min) + 1, (int)pow(2, max));
	}
	return 0;
}