// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    string arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    int secenja = m - 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = m - 1; k > 0; k--) {
                if (arr[k][i] != arr[k][j]) {
                    cout << k + 1 << '\n';
                    secenja = min(secenja, k + 1);
                }
            }
        }
    }
    cout << secenja;
}