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
	coord operator+(coord crd) {
		return coord(this->x + crd.x, this->y + crd.y);
	}
	coord operator+=(coord crd) {
		return *this = *this + crd;
	}
    string toString() {
        return "(" + to_string(this->x) + ", " + to_string(this->y) + ")";
    }
};
void solve(char**& m, int width, int height, coord entrance) {
	coord direction, now = entrance;
	if (entrance.x == 0) {
		direction.x = 1;
	}
	else if (entrance.y == 0) {
		direction.y = 1;
	}
	else if (entrance.x == width - 1) {
		direction.x = -1;
	}
	else if (entrance.y == height - 1) {
		direction.y = -1;
	}
	while (m[now.x][now.y] != 'x') {
		if (m[now.x][now.y] == '/') {
			swap(direction.x, direction.y);
			direction.x *= -1;
			direction.y *= -1;
		}
		else if (m[now.x][now.y] == '\\') {
			swap(direction.x, direction.y);
		}
		now += direction;
	}
	m[now.x][now.y] = '&';
}
int main() {
	int w, l;
	cin >> w >> l;
	for (int i = 1; w > 0 || l > 0; i++) {
		char** m = new char*[l];
		coord precalculatedEntrance;
		for (int i = 0; i < l; i++) {
			m[i] = new char[w];
			for (int j = 0; j < w; j++) {
				cin >> m[i][j];
				if (m[i][j] == '*') {
					precalculatedEntrance = {j, i};
				}
			}
		}
		solve(m, l, w, precalculatedEntrance);
		cout << "HOUSE " << i << '\n';
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < w; j++) {
				cout << m[i][j];
			}
			cout << '\n';
		}
		cin >> w >> l;
	}
	return 0;
}