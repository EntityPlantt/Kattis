// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int h, w, n, x, filled = 0;
    cin >> h >> w >> n;
    while (n--) {
        cin >> x;
        filled += x;
        if (filled > w) {
            break;
        }
        if (filled == w) {
            filled = 0;
            h--;
        }
        if (h == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}