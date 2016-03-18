#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
unsigned long long int buf[100001];
bool mark[100001];
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%lld", &buf[i]);
			mark[i] = false;
		}
		unsigned long long int num = 0;
		for (int i = 0; i < 64; i++) {
			int sum = 0;
			for (int j = 0; j < n; j++) {
				if (mark[j]) continue;
				sum += (buf[j] & 1);
				buf[j] >>= 1;
				if (buf[j] == 0) mark[j] = true;
			}
			sum %= 3;
			sum <<= i;
			num += sum;
		}
		printf("%d\n", num);
	}
	return 0;
}

#include <stdio.h>
#include <stdbool.h>
unsigned long long int buf[100001];
int main() {
	int n;
	char result[65];
	unsigned long long int num;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%lld", &num);

		}
	}
}