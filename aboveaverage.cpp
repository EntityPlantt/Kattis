#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int sz, aboveAvg = 0;
		cin >> sz;
		double students[sz], avg = 0;
		for (int j = 0; j < sz; j++) {
			cin >> students[j];
			avg += students[j];
		}
		avg /= (double) sz;
		for (int j = 0; j < sz; j++) {
			if (avg < students[j]) {
				aboveAvg++;
			}
		}
		cout << fixed << setprecision(3) << double(aboveAvg) / double(sz) * 100.0 << "%\n";
	}
	return 0;
}