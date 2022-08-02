#include <bits/stdc++.h>
using namespace std;
struct coord {
	double x, y;
	coord(double x = 0, double y = 0) {
		this->x = x;
		this->y = y;
	}
	double distanceTo(coord crd) {
		return sqrt(pow(crd.x - this->x, 2) + pow(crd.y - this->y, 2));
	}
};
int main() {
	double distance;
	int n;
	cin >> distance >> n;
	while (distance > 0) {
		vector <coord> hives(n);
		vector <bool> sour(n, false);
		for (coord &hive : hives)
			cin >> hive.x >> hive.y;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (hives[i].distanceTo(hives[j]) <= distance) {
					sour[i] = sour[j] = true;
				}
			}
		}
		int sourCount = count(sour.begin(), sour.end(), true);
		cout << sourCount << " sour, " << n - sourCount << " sweet\n";
		cin >> distance >> n;
	}
	return 0;
}