#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int num, maxtimesnum, maxtimes = 0, times = 0, last = -1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &num);
			if (last <= 0) {
				last = num;
				times = 1;
			}
			else if (num == last) {
				times++;
			}
			else {
				last = num;
				times = 1;
			}
			if (times > maxtimes) {
				maxtimes = times;
				maxtimesnum = num;
			}
		}
		printf("%d\n", maxtimesnum);
	}
	return 0;
}