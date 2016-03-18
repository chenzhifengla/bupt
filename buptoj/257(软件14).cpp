#include <stdio.h>
struct Node {
	int father;
	int level;
}node[101];
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		for (int j = 1; j <= n; j++) {
			node[j].level = 1;
			node[j].father = -1;
		}
		int u, v;
		for (int j = 1; j < n; j++) {
			scanf("%d%d", &u, &v);
			node[v].father = u;
			node[v].level = node[u].level + 1;
		}
		int m;
		scanf("%d", &m);
		for (int j = 1; j <= m; j++) {
			scanf("%d%d", &u, &v);
			while (u != v) {
				if (node[u].level > node[v].level) {
					u = node[u].father;
				}
				else if (node[u].level < node[v].level) {
					v = node[v].father;
				}
				else {
					u = node[u].father;
					v = node[v].father;
				}
			}
			printf("%d\n", u);
		}
	}
	return 0;
}