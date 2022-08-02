#include <bits/stdc++.h>
using namespace std;
typedef unsigned short num;
int main() {
	num **table = new num*[4], direction;
	for (num i = 0; i < 4; i++) {
		table[i] = new num[4];
		for (num j = 0; j < 4; j++) {
			cin >> table[i][j];
		}
	}
	cin >> direction;
	bool invert = direction % 2;
	if (invert) {
		direction--;
		for (int i = 0; i < 4; i++) {
			for (int j = i + 1; j < 4; j++) {
				swap(table[i][j], table[j][i]);
			}
		}
	}
	for (num i = 0; i < 4; i++) {
		num *now = new num[4], nowptr = 0;
		for (num j = 0; j < 4; j++) {
			now[j] = 0;
		}
		if (direction == 2)
			reverse(table[i], table[i] + 4);
		for (num j = 0; j < 4; j++) {
			if (table[i][j] > 0) {
				now[nowptr++] = table[i][j];
			}
		}
		for (num j = 0; j < 3; j++) {
			if (now[j] == now[j + 1]) {
				now[j] *= 2;
				for (num k = j + 1; k < 3; k++) {
					now[k] = now[k + 1];
				}
				now[3] = 0;
			}
		}
		table[i] = now;
		if (direction == 2)
			reverse(table[i], table[i] + 4);
	}
	if (invert) {
		for (int i = 0; i < 4; i++) {
			for (int j = i + 1; j < 4; j++) {
				swap(table[i][j], table[j][i]);
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << table[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}