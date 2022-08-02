#include <iostream>
#include <cmath>
using namespace std;
typedef long double real;
int main() {
    int n, m;
    cin >> n;
    while (n--) {
        real x, y;
        cin >> x >> y >> m;
        bool light = false;
        while (m--) {
            real a, b;
            cin >> a >> b;
            if (!light && pow(a - x, 2) + pow(b - y, 2) <= 64) {
                light = true;
            }
        }
        cout << (light ? "light a candle\n" : "curse the darkness\n");
    }
}