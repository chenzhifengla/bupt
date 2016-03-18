#include <stdio.h>
char buf[100001][1001];
int m[100001];
int main() {
	int n;
	for (int i = 0; i < n; i++) {
		scanf("%s", buf[i]);
		m[i] = 0;
		for (char* p = buf[i]; *p; p++) {
			m[i] += (*p - 'A');
		}
	}
	int num;
	scanf("%d", &num);
	for (int i = 0; i < n; i++) {
		if (m[i] == num) {
			printf("%s\n", buf[i]);
		}
	}
	return 0;
}