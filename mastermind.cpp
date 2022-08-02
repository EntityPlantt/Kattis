#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, r = 0, s = 0;
	cin >> n;
	string code;
	bool used[n];
	memset(used, false, sizeof(used));
	cin >> code;
	for (int i = 0; i < n; i++) {
		char x;
		cin >> x;
		if (code[i] == x && !used[i]) {
			r++;
			used[i] = true;
			continue;
		}
		for (int j = 0; j < n; j++) {
			if (code[j] == x && !used[j]) {
				s++;
				used[j] = true;
				break;
			}
		}
	}
	cout << r << ' ' << s;
	return 0;
}