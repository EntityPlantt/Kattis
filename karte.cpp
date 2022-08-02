// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
char znaci[4] = {'P', 'K', 'H', 'T'};
int main() {
	string s;
	cin >> s;
	bool deck[4][13];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			deck[i][j] = false;
		}
	}
	for (int i = 0; i < s.size(); i += 3) {
		int znak = distance(znaci, find(znaci, znaci + 4, s[i])),
		broj = int(s[i + 1] - '0') * 10 + int(s[i + 2] - '0') - 1;
		if (deck[znak][broj]) {
			cout << "GRESKA";
			return 0;
		}
		deck[znak][broj] = true;
	}
	for (int i = 0; i < 4; i++) {
		cout << count(deck[i], deck[i] + 13, false) << ' ';
	}
	return 0;
}