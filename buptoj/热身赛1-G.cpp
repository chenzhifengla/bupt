



/*
#include <stdio.h>
#include <vector>
using namespace std;
struct E {
	int next;
	int len;
};
vector<E> edge[100001];
bool mark[100001];

int main() {
	int n, q;
	while (scanf("%d%d", &n, &q) != EOF) {
		for (int i = 1; i <= n; i++) {
			edge[i].clear();
			mark[i] = false;
		}
		for (int i = 1; i < n; i++) {
			int a, b;
			scanf("%d%d", &a, &b);
			if (!mark[a] && !mark[b])
			E tmp;
			tmp.len = 1;

		}
	}
}

*/




#include <stdio.h>
#include <vector>
using namespace std;
vector<int> edge[100001];
bool mark[100001];

int DFS(int x, int d) {

}

int BFS(int x, int d) {
	mark[x] = true;
	if (d == 0) {
		mark[x] = false;
		return 1;
	}
	int num = 0;
	for (int i = 0; i < edge[x].size(); i++) {
		if (mark[edge[x][i]])continue;
		num += BFS(edge[x][i], d - 1);
	}
	mark[x] = false;
	return num;
}

int main() {
	int n, q;
	while (scanf("%d%d", &n, &q) != EOF) {
		for (int i = 1; i <= n; i++) {
			edge[i].clear();
		}
		for (int i = 1; i < n; i++) {
			int a, b;
			scanf("%d%d", &a, &b);
			edge[a].push_back(b);
			edge[b].push_back(a);
		}
		for (int i = 0; i < q; i++) {
			int x, d;
			scanf("%d%d", &x, &d);


			printf("%d\n", BFS(x, d));
		}
	}
	return 0;
}

