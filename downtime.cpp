#include <bits/stdc++.h>
using namespace std;
int main() {
	size_t n, k, maxRequestsSize = 0;
	cin >> n >> k;
	vector <size_t> requests;
	for (size_t i = 0; i < n; i++) {
		size_t r, sz = 0;
		cin >> r;
		requests.push_back(r);
		for (size_t j = 0; j < requests.size(); j++) {
			if (requests[j] + 1000 > r) {
				sz++;
			}
		}
		maxRequestsSize = max(maxRequestsSize, sz);
	}
	cout << (size_t) ceil((long double) maxRequestsSize / (long double) k);
	return 0;
}