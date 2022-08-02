// GitHub: EntityPlantt/Kattis
#include <iostream>
signed int pow(signed int base, unsigned int exponent) {
	if (exponent == 0) {
		return 1;
	}
	return pow(base, exponent - 1) * base;
}
using namespace std;
int main() {
	int n, x = 0, k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		x += pow(k / 10, k % 10);
	}
	cout << x;
	return 0;
}