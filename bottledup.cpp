// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
int main() {
	int s, v1, v2;
	cin >> s >> v1 >> v2;
	int maxV1 = 1000000, maxV2 = 1000000;
	for (int c1 = 0; c1 <= s / v1; c1++) {
		if ((s - v1 * c1) % v2 == 0 && maxV1 + maxV2 > c1 + (s - v1 * c1) / v2) {
			maxV1 = c1;
			maxV2 = (s - v1 * c1) / v2;
		}
	}
	if (maxV1 * v1 + maxV2 * v2 == s)
		cout << maxV1 << ' ' << maxV2;
	else 
		cout << "Impossible";
	return 0;
}