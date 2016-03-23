#include <stdio.h>
#include <math.h>
#include <limits.h>

int min(int a, int b) {
	return a > b ? b : a;
}

int lenNum(long long a) {
	int len = 0;
	while (a > 0) {
		len++;
		a /= 10;
	}
	return len;
}

int getModify(long long a, long long b) {
	int num = 0;
	while (a > 0) {
		if (a % 10 != b % 10) {
			num++;
		}
		a /= 10;
		b /= 10;
	}
	return num;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a1, b;
		scanf("%lld%lld", &a1, &b);
		int lena = lenNum(a1);
		int lenb = lenNum(b);
		long long m = (int)pow(10, lenb);
		int erase = lena - lenb;
		int needmodify = lenb;
		for (int i = lenb; i <= lena; i++) {
			long long a2 = a1 % m;
			if (a2 < b) {
				erase--;
				m *= 10;
				continue;
			}
			long long num = a2 % b;
			int t;
			if (lenNum(a2 + b - num) > i) {
				t = getModify(a2, a2 - num);
			}
			else t = min(getModify(a2, a2 + b - num), getModify(a2, a2 - num));
			if (t + erase < needmodify) needmodify = t + erase;
			erase--;
			m *= 10;
		}
		printf("%d\n", needmodify);
	}
	return 0;
}


/*
int min(int a, int b) {
	return a > b ? b : a;
}
int first(long long num, long long a) {
	long long sum = a + num;
	int m = 0;
	while (sum > 0) {
		if (a % 10 != sum % 10) {
			m++;
		}
		a /= 10;
		sum /= 10;
	}
	return m;
}

int second(long long num, long long a, long long b) {
	long long sum = a - b + num;
	int m = 0;
	while (a > 0) {
		if (a % 10 != sum % 10) {
			m++;
		}
		a /= 10;
		sum /= 10;
	}
	return m;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a1, b;
		scanf("%lld%lld", &a1, &b);
		if (a1 < b) { printf("-1\n"); continue; }
		int lena = 0;
		long long x = a1;
		while (x > 0) {
			lena++;
			x /= 10;
		}
		int erase = 0;
		int modify = INT_MAX;
		for (int i = lena -1; a1 >= b; i--) {
			long long num = a1 % b;

			int numlen=0;
			long long y = num;
			if (b > num)y = b;
			while (y > 0) {
				numlen++;
				y /= 10;
			}
			modify = numlen;


			int t = min(first(num, a1), second(num, a1, b));
			if (t + erase < modify) {
				modify = t + erase;
			}
			erase++;
			a1 = a1 % (int)pow(10, i);
		}
		printf("%d\n", modify);
	}
	return 0;
}
*/