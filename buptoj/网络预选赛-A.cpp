#include <stdio.h>
int prime[32771];
int primeSize;
bool mark[32771];

void init() {
	for (int i = 1; i <= 32770; i++) {
		mark[i] = false;
	}
	primeSize = 0;
	for (int i = 2; i <= 32770; i++) {
		if (mark[i]) continue;
		prime[primeSize++] = i;
		for (int j = i * i; j <= 32770; j += i) {
			mark[j] = true;
		}
	}
}

int main() {
	init();
	int n;
	while (scanf("%d", &n) != EOF && n != 0) {
		int num = 0;
		int bound = n / 2;
		for (int i = 0; prime[i] <= bound; i++) {
			if (!mark[n - prime[i]]) num++;
		}
		printf("%d\n", num);
	}
	return 0;
}