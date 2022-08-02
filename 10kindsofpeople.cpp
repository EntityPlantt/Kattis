// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
struct coord {
	int x, y;
	coord(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
};
int main() {
	int w, h, q;
	cin >> w >> h;
	bool mb[w][h];
	int mi[w][h];
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			char x;
			cin >> x;
			mb[i][j] = x == '1';
			mi[i][j] = -1;
		}
	}
	int fillIn = 0;
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			if (mi[i][j] == -1) {
				bool decimal = mb[i][j];
				fillIn++;
				queue <coord> bfs;
				bfs.push({i, j});
				while (!bfs.empty()) {
					coord now = bfs.front();
					bfs.pop();
					mi[now.x][now.y] = fillIn;
					if (now.x > 0
					 && mi[now.x - 1][now.y] == -1
					 && mb[now.x - 1][now.y] == decimal) {
						bfs.push({now.x - 1, now.y});
						mi[now.x - 1][now.y] = fillIn;
					}
					if (now.y > 0
					 && mi[now.x][now.y - 1] == -1
					 && mb[now.x][now.y - 1] == decimal) {
						bfs.push({now.x, now.y - 1});
						mi[now.x][now.y - 1] = fillIn;
					}
					if (now.x < w - 1
					 && mi[now.x + 1][now.y] == -1
					 && mb[now.x + 1][now.y] == decimal) {
						bfs.push({now.x + 1, now.y});
						mi[now.x + 1][now.y] = fillIn;
					}
					if (now.y < h - 1
					 && mi[now.x][now.y + 1] == -1
					 && mb[now.x][now.y + 1] == decimal) {
						bfs.push({now.x, now.y + 1});
						mi[now.x][now.y + 1] = fillIn;
					}
				}
			}
		}
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		coord a, b;
		cin >> a.x >> a.y >> b.x >> b.y;
		if (mi[--a.x][--a.y] == mi[--b.x][--b.y]) {
			if (mb[a.x][a.y]) {
				cout << "decimal\n";
			}
			else {
				cout << "binary\n";
			}
		}
		else {
			cout << "neither\n";
		}
	}
	return 0;
}