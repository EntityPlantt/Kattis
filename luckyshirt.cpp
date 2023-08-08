// GitHub: EntityPlantt/Kattis
#include <cstdio>
#include <cmath>
int n, i, k, a;
double s;
int main() {
	scanf("%d%d%d", &n, &i, &k);
	for (a = i; a <= n; a++) {
		s += (a + 1) * (pow(double(a) / n, k) - pow(double(a - 1) / n, k)) / 2.0;
	}
	printf("%lf", i * pow(double(i - 1) / n, k) + s);
	// P(max = a) = P(max <= a) - P(max <= a - 1)
	// P(max < a) = (a / n) ** k;
	// i * P(max <= i) + sum(a = [i, n], P(max = a) * (a + 1) / 2);
	return 0;
}