// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, times = 0, lastStack = 0;
	cin >> n;
	stack <int> st;
	for (int i = 0; i < n * 2; i++) {
		int x;
		cin >> x;
		if (st.size() && st.top() == x) {
			times += i - lastStack + 1;
			lastStack = i + 1;
			st.pop();
		}
		else {
			st.push(x);
		}
	}
	cout << (st.empty() ? to_string(times) : "impossible");
	return 0;
}