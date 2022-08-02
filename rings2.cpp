// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
#define debug false
struct coord {
    int x, y;
    coord(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    bool operator==(coord crd) {
        return this->x == crd.x && this->y == crd.y;
    }
    string toString() {
    	return "(" + to_string(this->x) + ", " + to_string(this->y) + ")";
    }
};
int main() {
	int n, m, ringsLeft = 0;
	bool threeCharacterPrinting = false;
	cin >> n >> m;
	int tree[n + 2][m + 2];
	for (int i = 0; i < n + 2; i++) {
		tree[i][0] = tree[i][m + 1] = 0;
	}
	for (int i = 1; i < m + 1; i++) {
		tree[0][i] = tree[n + 1][i] = 0;
	}
	bool visited[n + 2][m + 2];
	for (int i = 0; i < n + 2; i++) {
		memset(visited[i], false, m + 2);
	}
	queue <coord> bfs, q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char x;
			cin >> x;
			tree[i + 1][j + 1] = -(x == 'T');
			if (x == 'T') {
				ringsLeft++;
			}
			if (tree[i][j] == 0) {
				bfs.push({i, j});
				visited[i][j] = true;
			}
		}
	}
	while (!bfs.empty()) {
		coord now = bfs.front();
		bfs.pop();
		if (now.x > 0) {
			if (tree[now.x - 1][now.y] == 0 && !visited[now.x - 1][now.y]) {
				bfs.push({now.x - 1, now.y});
				visited[now.x - 1][now.y] = true;
			}
			else if (tree[now.x - 1][now.y] == -1) {
				tree[now.x - 1][now.y] = 1;
				q.push({now.x - 1, now.y});
				ringsLeft--;
			}
		}
		if (now.y > 0) {
			if (tree[now.x][now.y - 1] == 0 && !visited[now.x][now.y - 1]) {
				bfs.push({now.x, now.y - 1});
				visited[now.x][now.y - 1] = true;
			}
			else if (tree[now.x][now.y - 1] == -1) {
				tree[now.x][now.y - 1] = 1;
				q.push({now.x, now.y - 1});
				ringsLeft--;
			}
		}
		if (now.x <= n) {
			if (tree[now.x + 1][now.y] == 0 && !visited[now.x + 1][now.y]) {
				bfs.push({now.x + 1, now.y});
				visited[now.x + 1][now.y] = true;
			}
			else if (tree[now.x + 1][now.y] == -1) {
				tree[now.x + 1][now.y] = 1;
				q.push({now.x + 1, now.y});
				ringsLeft--;
			}
		}
		if (now.y <= m) {
			if (tree[now.x][now.y + 1] == 0 && !visited[now.x][now.y + 1]) {
				bfs.push({now.x, now.y + 1});
				visited[now.x][now.y + 1] = true;
			}
			else if (tree[now.x][now.y + 1] == -1) {
				tree[now.x][now.y + 1] = 1;
				q.push({now.x, now.y - 1});
				ringsLeft--;
			}
		}
	}
	#if debug
	{
		queue <coord> temp = q;
		cout << temp.size() << endl;
		while (!temp.empty()) {
			cout << temp.front().toString() << ' ';
			temp.pop();
		}
		cout << endl;
	}
	#endif
	for (int level = 1; ringsLeft; level++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (tree[i][j] == level) {
					bfs.push(coord(i, j));
				}
			}
		}
		while (!bfs.empty()) {
			coord now = bfs.front();
			bfs.pop();
			if (tree[now.x - 1][now.y] == -1) {
				#if debug
				cout << "Adding to the left!\n" << ringsLeft - 1
				<< " rings left\nAt " << now.toString()
				<< "\nChanging from " << tree[now.x - 1][now.y]
				<< " to " << tree[now.x][now.y] + 1 << endl;
				#endif
				tree[now.x - 1][now.y] = tree[now.x][now.y] + 1;
				ringsLeft--;
				if (tree[now.x][now.y] > 8) {
					threeCharacterPrinting = true;
				}
			}
			if (tree[now.x][now.y - 1] == -1) {
				#if debug
				cout << "Adding to the top!\n" << ringsLeft - 1
				<< " rings left\nAt " << now.toString()
				<< "\nChanging from " << tree[now.x][now.y - 1]
				<< " to " << tree[now.x][now.y] + 1 << endl;
				#endif
				tree[now.x][now.y - 1] = tree[now.x][now.y] + 1;
				ringsLeft--;
				if (tree[now.x][now.y] > 8) {
					threeCharacterPrinting = true;
				}
			}
			if (tree[now.x + 1][now.y] == -1) {
				#if debug
				cout << "Adding to the right!\n" << ringsLeft - 1
				<< " rings left\nAt " << now.toString()
				<< "\nChanging from " << tree[now.x + 1][now.y]
				<< " to " << tree[now.x][now.y] + 1 << endl;
				#endif
				tree[now.x + 1][now.y] = tree[now.x][now.y] + 1;
				ringsLeft--;
				if (tree[now.x][now.y] > 8) {
					threeCharacterPrinting = true;
				}
			}
			if (tree[now.x][now.y + 1] == -1) {
				#if debug
				cout << "Adding to the bottom!\n" << ringsLeft - 1
				<< " rings left\nAt " << now.toString()
				<< "\nChanging from " << tree[now.x][now.y + 1]
				<< " to " << tree[now.x][now.y] + 1 << endl;
				#endif
				tree[now.x][now.y + 1] = tree[now.x][now.y] + 1;
				ringsLeft--;
				if (tree[now.x][now.y] > 8) {
					threeCharacterPrinting = true;
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			string out;
			if (tree[i][j] == 0) {
				out = "";
			}
			else {
				out = to_string(tree[i][j]);
			}
			if (threeCharacterPrinting) {
				while (out.size() < 3) {
					out = "." + out;
				}
			}
			else {
				while (out.size() < 2) {
					out = "." + out;
				}
			}
			cout << out;
		}
		cout << endl;
	}
	return 0;
}