#include <stdio.h>
int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		int fz[7], fm[7];
		for (int i = 1; i <= n; i++) {
			scanf("%d", &fz[i]);
		}
		for (int i = 1; i <= m; i++) {
			scanf("%d", &fm[i]);
		}
		double r[7];
		for (int i = 1; i <= m; i++) {
			double fenzi = 1;
			for (int j = 1; j <= n; j++) {
				fenzi *= (fm[i] - fz[j]);
			}
			double fenmu = 1;
			for (int j = 1; j <= m; j++) {
				if (j == i) continue;
				fenmu *= (fm[i] - fm[j]);
			}
			double result = fenzi / fenmu;
			if (result <= 0 && result > -0.000001) {
				result = 0;
			}
			r[i] = result;
		}
		printf("%.6f", r[1]);
		for (int i = 2; i <= m; i++) {
			printf(" %.6f", r[i]);
		}
		printf("\n");
	}
	return 0;
}