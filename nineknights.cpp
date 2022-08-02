#include <bits/stdc++.h>
using namespace std;
struct coord {
	int x, y;
	coord(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	bool operator==(coord crd) {
		return this->x == crd.x && this->y == crd.y;
	}
};
int main() {
	vector <coord> knights;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			char x;
			cin >> x;
			if (x == 'k') {
				knights.push_back(coord(i, j));
			}
		}
	}
	if (knights.size() != 9) {
		cout << "invalid";
		return 0;
	}
	for (coord &k : knights) {
		if (count(knights.begin(), knights.end(), coord(k.x + 2, k.y + 1))
		 || count(knights.begin(), knights.end(), coord(k.x + 2, k.y - 1))
		 || count(knights.begin(), knights.end(), coord(k.x - 2, k.y - 1))
		 || count(knights.begin(), knights.end(), coord(k.x - 2, k.y + 1))
		 || count(knights.begin(), knights.end(), coord(k.x + 1, k.y + 2))
		 || count(knights.begin(), knights.end(), coord(k.x + 1, k.y - 2))
		 || count(knights.begin(), knights.end(), coord(k.x - 1, k.y - 2))
		 || count(knights.begin(), knights.end(), coord(k.x - 1, k.y + 2))) {
			cout << "in";
			break;
		}
	}
	cout << "valid";
	return 0;
}