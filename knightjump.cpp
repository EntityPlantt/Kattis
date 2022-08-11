// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <queue>
using namespace std;
struct mblock {
    unsigned path = -1;
    bool visited = false, passable;
};
pair <int, int> valid_jumps[8] = {
    {-1, -2}, {-1, 2}, {1, 2}, {1, -2},
    {-2, -1}, {-2, 1}, {2, 1}, {2, -1}
};
int main() {
    int n;
    char c;
    cin >> n;
    mblock map[n][n];
    queue <pair <int, int>> bfs;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> c;
            map[i][j].passable = c != '#';
            if (c == 'K') {
                bfs.push({i, j});
                map[i][j].path = 0;
            }
        }
    }
    while (!bfs.empty()) {
        map[bfs.front().first][bfs.front().second].visited = true;
        for (int i = 0; i < 8; i++) {
            int x = bfs.front().first + valid_jumps[i].first, y = bfs.front().second + valid_jumps[i].second;
            if (x < 0 || y < 0 || x >= n || y >= n || !map[x][y].passable || map[x][y].visited) {
                continue;
            }
            if (map[x][y].path > map[bfs.front().first][bfs.front().second].path + 1) {
                map[x][y].path = map[bfs.front().first][bfs.front().second].path + 1;
                bfs.push({x, y});
            }
        }
        bfs.pop();
    }
    cout << (map[0][0].visited ? signed(map[0][0].path) : -1);
    return 0;
}