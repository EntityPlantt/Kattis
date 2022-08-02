#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	while (a > 0 || b > 0) {
		if (a + b == 13) {
			cout << "Never speak again.\n";
		}
		else if (a < b) {
			cout << "Left beehind.\n";
		}
		else if (a > b) {
			cout << "To the convention.\n";
		}
		else {
			cout << "Undecided.\n";
		}
		cin >> a >> b;
	}
	return 0;
}