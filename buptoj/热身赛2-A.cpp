#include<stdio.h>
#define MAX 1000000
int buf[MAX + 1];
int main() {
	for (int i = 1; i <= MAX; i++) buf[i] = 1;
	for (int i = 2; i <= MAX; i++) {
		int bound = MAX / i;
		for (int j = 1; j <= bound; j++) {
			buf[i*j]++;
		}
		buf[i] += buf[i - 1];
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", buf[n]);
	}
	return 0;
}