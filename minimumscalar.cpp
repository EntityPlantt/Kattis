#include <bits/stdc++.h>
using namespace std;
typedef long long llong;
template <typename T>
bool compare_greater(const T a, const T b) {
	return a > b;
}
int main() {
	llong n;
	cin >> n;
	for (llong i = 1; i <= n; i++) {
		llong sz;
		cin >> sz;
		llong v1[sz], v2[sz];
		for (llong j = 0; j < sz; j++) {
			cin >> v1[j];
		}
		sort(v1, v1 + sz);
		for (llong j = 0; j < sz; j++) {
			cin >> v2[j];
		}
		sort(v2, v2 + sz, compare_greater <llong>);
		long long sum = 0;
		for (llong j = 0; j < sz; j++) {
			sum += v1[j] * v2[j];
		}
		cout << "Case #" << i << ": " << sum << '\n';
	}
	return 0;
}