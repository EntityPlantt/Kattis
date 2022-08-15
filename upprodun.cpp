// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m / n; j++) {
            cout << '*';
        }
        if (m % n > i) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}