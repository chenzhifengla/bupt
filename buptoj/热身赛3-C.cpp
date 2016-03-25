#include <stdio.h>
#include<unordered_map>
using namespace std;
#define M 23333
int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int k, n;
		scanf("%d%d", &k, &n);
		long long sum = 0;
		unordered_map<int, int> table;
		for (int i = 1; i <= n; i++) {
			int g = gcd(i, n);
			int result = 1;
			if (table.find(g) != table.end()) {
				result = table[g];
			}
			else {
				for (int j = 0; j < g; j++) {
					result *= k;
					result %= M;
				}
				table[g] = result;
			}
			sum += result;
			sum %= M;
		}
		printf("%d\n", sum);
	}
	return 0;
}