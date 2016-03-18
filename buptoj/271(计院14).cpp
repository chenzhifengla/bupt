#include <stdio.h>

void rotate(char buf[][51], int& n, int& m) {
	int tmp[51][51];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			tmp[j][n + 1 - i] = buf[i][j];
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			buf[i][j] = tmp[i][j];
		}
	}
	int t = n;
	n = m;
	m = t;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m;
		scanf("%d%d", &n, &m);
		char buf[51][51];
		for (int i = 1; i <= n; i++) {
			scanf("%s", buf[i] + 1);
		}
		int angle;
		scanf("%d", &angle);
		int times = angle / 90;
		for (int i = 0; i < times; i++) {
			rotate(buf, n, m);
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				printf("%c", buf[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}