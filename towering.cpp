// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
int main() {
	int tower1, tower2;
	vector <int> boxes(6);
	cin >> boxes[0] >> boxes[1] >> boxes[2] >> boxes[3]
		>> boxes[4] >> boxes[5] >> tower1 >> tower2;
	sort(boxes.begin(), boxes.end());
	reverse(boxes.begin(), boxes.end());
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			for (int k = j + 1; k < 6; k++) {
				if (boxes[i] + boxes[j] + boxes[k] == tower1) {
					cout << boxes[i] << ' ' << boxes[j] << ' ' << boxes[k];
					boxes.erase(boxes.begin() + k);
					boxes.erase(boxes.begin() + j);
					boxes.erase(boxes.begin() + i);
				}
			}
		}
	}
	for (int &x : boxes)
		cout << ' ' << x;
	return 0;
}