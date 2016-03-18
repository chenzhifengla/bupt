#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, maxlen = 0;
		scanf("%d", &n);
		int diff, last, now, len = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &now);
			if (len == 0) {
				len = 1;
			}
			else if (len == 1) {
				len = 2;
				diff = now - last;
			}
			else if (now - last == diff) {
				len++;
			}
			else {
				len = 2;
				diff = now - last;
			}
			last = now;
			if (len > maxlen) maxlen = len;
		}
		printf("%d\n", maxlen);
	}
	return 0;
}