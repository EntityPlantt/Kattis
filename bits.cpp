// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int max(int a, int b) {
    return a < b ? b : a;
}
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n;
        m = 0;
        while (n) {
            m = max(m, __builtin_popcount(n));
            n /= 10;
        }
        cout << m << '\n';
    }
    return 0;
}