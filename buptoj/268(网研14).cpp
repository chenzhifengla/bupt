#include <stdio.h>
struct process {
	bool mark;
	bool son[101];
}buf[101];

void create(int a) {
	buf[a].mark = true;
	for (int i = 0; i < 101; i++) {
		buf[a].son[i] = false;
	}
}

void kill(int a) {
	buf[a].mark = false;
	for (int i = 0; i < 101; i++) {
		if (buf[a].son[i]) {
			kill(i);
		}
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		create(0);
		for (int i = 1; i < 101; i++) {
			buf[i].mark = false;
		}
		int n;
		scanf("%d", &n);
		while (n--) {
			char str[20];
			scanf("%s", str);
			if (str[0] == 'F') {
				int a, b;
				scanf("%d%d", &a, &b);
				buf[a].son[b] = true;
				if (!buf[b].mark) create(b);
			}
			else if (str[0] == 'Q') {
				int a;
				scanf("%d", &a);
				if (buf[a].mark) printf("Yes\n");
				else printf("No\n");
			}
			else {
				int a;
				scanf("%d", &a);
				kill(a);
				buf[0].mark = true;
			}
		}
	}
	return 0;
}