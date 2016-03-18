#include <stdio.h>

void multi(int id[][5], int buf[][5]) {
	int m[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			m[i][j] = 0;
			for (int k = 0; k < 5; k++) {
				m[i][j] += id[i][k] * buf[k][j];
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			id[i][j] = m[i][j];
		}
	}
}

int main() {
	int t;
	while (t--) {
		int buf[5][5];
		int identity[5][5];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				identity[i][j] = 0;
			}
			identity[i][i] = 1;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				for (int k = 0; k < 5; k++) {
					scanf("%d", &buf[j][k]);
				}
			}
			multi(identity, buf);
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%d ", identity[i][j]);
			}
			printf("%d\n", identity[i][4]);
		}
	}
	return 0;
}