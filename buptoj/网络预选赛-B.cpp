/*
#include <stdio.h>
int f[2001];
int main() {
	f[0] = f[1] = f[2] = 1;
	for (int i = 3; i < 2001; i++) {
		f[i] = 0;
		for (int j = 1; j <= 17; j++) {
			int p = j * j;
			if (i - p < 0) continue;
			f[i] += f[i - p];
		}
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", f[n]);
	}
	return 0;
}
*/
/*
#include <stdio.h>
int f[2001];
int sq[2001];
int main() {
	int sqnum = 0;
	for (int i = 1; i < 500; i++) {
		if (i * i > 2000) continue;
		sq[sqnum++] = i * i;
	}
	for (int i = 0; i < 2001; i++) {
		f[i] = 0;
	}
	f[1] = 0;
	for (int i = 0; i < sqnum; i++) {
		for (int j = 0; j <= 17; j++) {
			int p = j * j;
			if (i + p > 2000) continue;
			f[sq[i] + p] = f[sq[i]] + 1;
		}
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", f[n]);
	}
	return 0;
}
*/
/*
#include <stdio.h>
int f[2001];

int main() {
	f[0] = 0;
	for (int i = 1; i < 2001; i++) {
		f[i] = 0;
	}
	for (int i = 0; i < 2001; i++) {
		for (int j = 1; j <= 17; j++) {
			for (int k = 1; i + k * j * j < 2001; k++) {
				f[i + k * j * j]++;
			}
		}
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", f[n]);
	}
	return 0;
}

*/

#include <stdio.h>
int f[2001];

int main() {
	for (int i = 0; i < 2001; i++) {
		f[i] = 1;
	}
	for (int i = 2; i <= 17; i++) {
		int p = i * i;
		int m = 1;
		for (int j = p; j < 2001; j += p) {
			for (int k = j; k < j + p; k++) {
				f[k] += m;
			}
			m++;
		}
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", f[n]);
	}
	return 0;
}