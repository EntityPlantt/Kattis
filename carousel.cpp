// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while (true) {
		cin >> n >> m;
		if (n == 0) {
			return 0;
		}
		int bestA = 1, bestB = 10000000;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			if (b <= m && double(a) / double(b) > double(bestA) / double(bestB)) {
				bestA = a;
				bestB = b;
			}
		}
		if (bestA == 1 && bestB == 10000000) {
			cout << "No suitable tickets offered\n";
		}
		else {
			cout << "Buy " << bestA << " tickets for $" << bestB << '\n';
		}
	}
}