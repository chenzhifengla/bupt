#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846
int main() {
	float v, a, t;
	while (scanf("%f%f%f", &v, &a, &t) != EOF) {
		double aP = a / 180 * pi;
		double taP = (t - a) / 180 * pi;
		double t = double(2 * v * sin(taP)) / (10 * cos(aP));
		double v0 = v * cos(taP);
		double x = v0 * t - 5 * sin(aP) * pow(t, 2);
		printf("%.2lf\n", x);
	}
	return 0;
}