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
		int m;
		for (int i = 1; i <= m; i++) {
			int x;
			scanf("%d", &x);
			bool find = false;
			int min = -1;
			int index;
			for (int j = 1; j <= n; j++) {
				if (buf[j] >= x && (min == -1 || buf[j] < min)) {
					min = buf[j];
					index = j;
					find = true;
				}
			}

		}
	}
}