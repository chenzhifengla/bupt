/*
#include <stdio.h>
struct E {
int now;
E* next;
}buf[200001];
int loc;
int main() {
int n;
while (scanf("%d", &n) != EOF) {
int a, b;
for (int i = 0; i < n; i++) {
scanf("%d%d", &a, &b);
E* p = &buf[0];
for (int j = 0; j < a; j++) {
p = p->next;
}

}
}
}
*/


#include <stdio.h>
struct E {
	int a, b;
}buf[200001];
int result[200001];
int mark[200001];
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &buf[i].a, &buf[i].b);
			mark[i] = false;
		}
		for (int i = n - 1; i >= 0; i--) {
			int index = buf[i].a;
			while (true) {
				if (!mark[index]) {
					result[index] = buf[i].b;
					mark[index] = true;
					break;
				}
				else {
					index++;
				}
			}
		}
		for (int i = 0; i < n - 1; i++) {
			printf("%d ", result[i]);
		}
		printf("%d\n", result[n - 1]);
	}
	return 0;
}