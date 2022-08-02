#include <bits/stdc++.h>
using namespace std;
int main() {
	long double r, h, p;
	cin >> r >> h >> p;
	while (r > 0) {
		cout << fixed << setprecision(2)
			 << (r * 3.14159265358979323846 + sqrt(r * r + h * h) * 2) * (100 + p) / 100
			 << endl;
		cin >> r >> h >> p;
	}
	return 0;
}