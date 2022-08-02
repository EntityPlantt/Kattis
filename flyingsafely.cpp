#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
    unsigned n, cityN, pilotN, a, b, maxPath;
    cin >> n;
    while (n--) {
        cin >> cityN >> pilotN;
        vector <int> graph[cityN];
        unsigned path[cityN];
        memset(path, -1, sizeof(path));
        while (pilotN--) {
            cin >> a >> b;
            graph[--a].push_back(--b);
            graph[b].push_back(a);
        }
        queue <int> bfs;
        bfs.push(0);
        path[0] = 0;
        maxPath = 0;
        while (!bfs.empty()) {
            for (int i = 0; i < graph[bfs.front()].size(); i++) {
                if (path[graph[bfs.front()][i]] > path[bfs.front()] + 1) {
                    path[graph[bfs.front()][i]] = path[bfs.front()] + 1;
                    bfs.push(graph[bfs.front()][i]);
                    maxPath++;
                }
            }
            bfs.pop();
        }
        cout << maxPath << '\n';
    }
    return 0;
}