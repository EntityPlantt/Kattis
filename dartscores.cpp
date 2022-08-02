// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <cmath>
int min(int a, int b) {
    return (a < b) ? a : b;
}
using namespace std;
typedef long double ldbl;
int main() {
    int t, n, s, x, y;
    cin >> t;
    while (t--) {
        cin >> n;
        s = 0;
        while (n--) {
            cin >> x >> y;
            s += min(11 - ceil(sqrt(ldbl(x * x + y * y)) / 20.0), 10);
        }
        cout << s << '\n';
    }
}