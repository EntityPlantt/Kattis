// GitHub: EntityPlantt/Kattis
// Not Finished
#include <iostream>
using namespace std;
struct coord {
    int x, y;
    coord(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char table[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> table[i][j];
            }
        }
        queue <coord> bfs;
    }
    return 0;
}