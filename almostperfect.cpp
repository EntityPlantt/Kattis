// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    size_t n, t;
    while (cin >> n) {
        cout << n;
        t = 1;
        double sqr = sqrt(n);
        if (sqr == round(sqr)) {
            t += sqr;
        }
        for (int i = 2; i * i < n; i++) {
            if (n % i == 0) {
                t += i + n / i;
            }
        }
        if (n < t) {
            swap(t, n);
        }
        if (n - t > 2) {
            cout << " not";
        }
        else if (n - t) {
            cout << " almost";
        }
        cout << " perfect\n";
    }
    return 0;
}