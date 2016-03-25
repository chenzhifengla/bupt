/*
#include <stdio.h>
#include <string.h>
char buf[100001];
int main() {
	int m, l;
	while (scanf("%d%d", &m, &l) != EOF) {
		scanf("%s", buf);
		int len = strlen(buf);
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < l; j++) {
				for (int k = 0; k < m; k++) {
					if (buf[i + j * l + k] == buf[i + k])
				}
			}
		}
	}
}


#include <stdio.h>
char buf[100001];
int m, l;
int DFS(int head) {
	int num = 0;
	int index = 0;
	bool flag = true;
	for (int i = l - 1; i >= 0; i--) {
		for (int j = m - 2; j >= 0; j--) {
			if (buf[j * l + i] != buf[(m - 1)*l + i]) {
				index = j * l + i + 1;
				flag = false;
				break;
			}
		}
		if (!flag)break;
	}
	if (flag) {
		index = l * m;
		return num + DFS(index);
	}
	else {
		return num + DFS(index);
	}
}
int main() {
	while (scanf("%d%d", &m, &l) != EOF) {
		scanf("%s", buf);
		printf("%d\n", DFS(0));
	}
	return 0;
}

*/
/*
#include <stdio.h>
#include <string.h>
char buf[100001];
int m, l;
int main() {
	while (scanf("%d%d", &m, &l) != EOF) {
		scanf("%s", buf);
		int head = 0;
		int num = 0;
		int len = strlen(buf);
		int end = len - m * l + 1;
		while (head <= end) {
			bool flag = false;
			for (int i = 1; i < m; i++) {
				for (int j = 0; j < l; j++) {
					if (buf[head + i * l + j] != buf[head + j]) {
						head += (i - 1) * l + j + 1;
						flag = true;
						break;
					}
				}
				if (flag) break;
			}
			if (!flag) {
				num++;
				head++;
				int headp = head + m * l;
				while (headp <= end) {
					if (buf[headp] == buf[head]) {
						num++;
						head++;
						headp++;
					}
					else {
						head = headp - l + 1;
						break;
					}
				}
			}
		}
		printf("%d\n", num);
	}
	return 0;
}
*/


#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int fun1(string s, int M, int L) {
	int len = M*L;
	int count = 0;
	for (int i = 0; i<s.length() - len + 1; i++) {
		string tmp = s.substr(i, len);
		bool flag = true;
		for (int i = 0; i<L; i++) {
			char c;
			if (flag == false)
				break;
			for (int j = 0; j<M; j++) {
				if (0 == j) {
					c = tmp[i];
					continue;
				}
				if (tmp[i + j*L] == c)
					continue;
				else {
					flag = false;
					break;
				}
			}
		}
		if (flag == true)
			count += 1;
	}
	return count;
}
std::string buf;
int m, l;
int main() {
	while (scanf("%d%d", &m, &l) != EOF) {
		cin >> buf;
		printf("%d\n", fun1(buf, m, l));
	}
	return 0;
}