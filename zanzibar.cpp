// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, x, i, y;
    cin >> n;
    while (n--) {
        i = 0;
        y = 1;
        x = 1;
        while (x) {
            if (y * 2 < x) {
                i += x - y * 2;
            }
            y = x;
            cin >> x;
        }
        cout << i << '\n';
    }
    return 0;
}