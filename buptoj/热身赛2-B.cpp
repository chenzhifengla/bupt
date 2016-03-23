#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		char buf[100][100];
		int len = 4 * n - 3;
		for (int i = 1; i <= len; i++) {
			for (int j = 1; j <= len; j++) {
				buf[i][j] = 'Z';
			}
		}
		for (int i = 1; i <= n; i++) {
			char c = i - 1 + 'A';
			int min = 2 * i - 1;
			int max = 4 * n - 2* i - 1;
			for (int j = min; j <= max; j++) {
				buf[min][j] = c;
				buf[max][j] = c;
				buf[j][min] = c;
				buf[j][max] = c;
			}
		}
		for (int i = 1; i <= len; i++) {
			for (int j = 1; j <= len; j++) {
				printf("%c", buf[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}