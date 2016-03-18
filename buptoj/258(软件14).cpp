#include <stdio.h>
struct student {
	char name[31];
	char sex[7];
	int year, month, day;
}stu[501];
int main() {
	int t;
	while (t--) {
		int n, m;
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++) {
			scanf("%s%s%d/%d/%d", stu[i].name, stu[i].sex, &stu[i].year, &stu[i].month, &stu[i].day);
		}
		for (int i = 0; i < m; i++) {
			char buf[100];
			getchar();
			scanf("%[^\n]", buf);
			int querynum = 0;
			for
		}
	}
}