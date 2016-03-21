#include <stdio.h>
#include <vector>
using namespace std;
struct E {
	int next;
	int bnum;
};
vector<E> edge[101];
bool mark[101];
bool beatiful[101];
int shortestlen;
int leastb;

void DFS(int start, int end, int now, int b) {
	if (now == end) {
		if ()
	}
}

int main() {
	int n, m, s, t, k;
	while (scanf("%d%d%d%d%d", &n, &m, &s, &t, &k) != EOF) {
		for (int i = 1; i <= n; i++) {
			edge[i].clear();
			mark[i] = false;
			beatiful[i] = false;
		}
		for (int i = 1; i <= m; i++) {
			int a, b;
			scanf("%d%d", &a, &b);
			E tmp;
			tmp.bnum = 0;

			tmp.next = b;
			edge[a].push_back(tmp);
			tmp.next = a;
			edge[b].push_back(tmp);
		}
		for (int i = 1; i <= k; i++) {
			int x;
			scanf("%d", &x);
			beatiful[x] = true;
		}
		int start = s;
		int end = t;
		if (beatiful[start]) b = 1;
		else b = 0;
		shortestlen = INT_MAX;
		leastb = 0;
		DFS(start, end, s, b);
	}
	return 0;
}


/*
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> edge[101];
bool mark[101];
bool beautiful[101];
int dis[101];
int main() {
	int n, m, s, t, k;
	while (scanf("%d%d%d%d%d", &n, &m, &s, &t, &k) != EOF) {
		for (int i = 1; i <= n; i++) edge[i].clear();
		while (m--) {
			int a, b;
			scanf("%d%d", &a, &b);
			edge[a].push_back(b);
			edge[b].push_back(a);
		}
		for (int i = 1; i <= n; i++) {
			dis[i] = -1;
			mark[i] = false;
			beautiful[i] = false;
		}
		for (int i = 1; i <= k; i++) {
			int x;
			scanf("%d", &x);
			beautiful[x] = true;
		}

		int bNum = 0;
		if (beautiful[s]) bNum++;

		dis[s] = 0;
		mark[s] = true;
		int newP = s;
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < edge[newP].size(); j++) {
				int t = edge[newP][j];
				if (mark[t]) continue;
				if (dis[t] == -1 || dis[t] > dis[newP] + 1) {
					dis[t] = dis[newP] + 1;
				}
			}
			int min = -1;
			for (int j = 1; j <= n; j++) {
				if (mark[j]) continue;
				if (dis[j] == -1) continue;
				if (min < 0 || dis[j] < min || (dis[j] == min && beautiful[j])) {
					min = dis[j];
					newP = j;
				}
			}
			mark[newP] = true;
			if (beautiful[newP]) bNum++;
		}
		printf("%d %d\n", dis[t], bNum);
	}
}