// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    size_t t, n, s, i, x;
    cin >> t;
    while (t--) {
        cin >> n;
        s = 0;
        for (i = 0; i < n; i++) {
            cin >> x;
            s += x % n;
        }
        cout << (s % n ? "NO\n" : "YES\n");
    }
    return 0;
}