#include <iostream>
#include <string.h>
using namespace std;
int main() {
    size_t n, s, t;
    cin >> n >> s >> t;
    size_t graph[n][n], path[n];
    bool visited[n];
    memset(visited, false, sizeof(visited));
    for (size_t i = 0; i < n; i++) {
        path[i] = -1;
        for (size_t j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    path[s] = 0;
    while (true) {
        size_t now = n, nowSize = -1;
        for (size_t i = 0; i < n; i++) {
            if (!visited[i] && nowSize > path[i]) {
                now = i;
                nowSize = path[i];
            }
        }
        if (now == n) {
            break;
        }
        visited[now] = true;
        for (size_t i = 0; i < n; i++) {
            if (!visited[i] && path[now] + graph[now][i] < path[i]) {
                path[i] = graph[now][i] + path[now];
            }
        }
    }
    cout << path[t];
}