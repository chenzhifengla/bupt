#include <stdio.h>
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		long long x = 0, y = 0;
		while (n--) {
			char d;
			int num;
			getchar();
			scanf("%c %d", &d, &num);
			switch (d) {
			case 'W':x -= num; break;
			case 'E':x += num; break;
			case 'N':y += num; break;
			case 'S':y -= num; break;
			}
		}
		printf("%lld %lld\n", x, y);
	}
	return 0;
} 