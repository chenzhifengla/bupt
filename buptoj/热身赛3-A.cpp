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

#include <stdio.h>
bool dp[1002][1002];
int buf[1001];
int main() {
	for (int i = 0; i < 1002; i++) {
		dp[i][0] = false;
		dp[++i][0] = true;
	}
	for (int j = 1; j < 1001; j++) {
		bool flag = false;
		flag = ((!dp[1][j - 1]) || (!dp[0][j - 1]));
		dp[0][j] = flag;
		for (int i = 1; i < 1001; i++) {
			bool flag2 = false;
			flag2 = ((!dp[i - 1][j]) || (!dp[i + 1][j - 1]) || (!dp[i][j - 1]));
			dp[i][j] = flag2;
		}
	}
	int n;
	while (scanf("%d", &n) != EOF) {
		int num1 = 0, numn = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &buf[i]);
			if (buf[i] == 1) num1++;
			else numn++;
		}
		double pall = 1;
		for (int i = 0; i < n; i++) {
			if (buf[i] == 1) continue;
			double p = 0;

		}
	}
}