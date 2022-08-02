// GitHub: EntityPlantt/Kattis
// Not Finished
#include <iostream>
#include <queue>
using namespace std;
struct __edge {
    size_t to, weight;
};
vector <size_t> length;
struct __sorter {
    bool operator()(size_t a, size_t b) {
        return length[a] > length[b];
    }
};
main() {
    size_t n, m, q, s, u, v, w;
    while (true) {
        cin >> n >> m >> q >> s;
        if (!n && !m && !q && !s) {
            break;
        }
        vector <__edge> graph[n];
        while (m--) {
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }
        vector <bool> visited(n, false);
        length = vector<size_t>(n, -1);
        length[s] = 0;
        priority_queue <size_t, vector <size_t>, __sorter> dijkstra;
        for (int i = 0; i < n; i++) {
            dijkstra.push(i);
        }
        while (!dijkstra.empty()) {
            size_t now = dijkstra.top();
            dijkstra.pop();
            if (length[now] == size_t(-1)) {
                break;
            }
            visited[now] = true;
            for (int i = 0; i < graph[now].size(); i++) {
                if (!visited[graph[now][i].to] && length[graph[now][i].to] > graph[now][i].weight + length[now]) {
                    length[graph[now][i].to] = graph[now][i].weight + length[now];
                }
            }
        }
        while (q--) {
            cin >> v;
            if (visited[v]) {
                cout << length[v] << '\n';
            }
            else {
                cout << "Impossible\n";
            }
        }
    }
    return 0;
}