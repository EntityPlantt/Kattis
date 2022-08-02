// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
long double floor(long double x) {
    return (long double) int(x);
}
int solve(int a, int b, int c) {
    switch (a / 2 * 4 + b / 2 * 2 + c / 2) {
        case 0: // +-, +-, +-
        return 4 + (a ? -4 : 4) + (b ? -4 : 4) + (c ? -4 : 4);
        case 1: // +-, +-, */
        return 4 + (a ? -4 : 4) + (b ? -1 : 1) * (c > 2 ? 1 : 16);
        case 2: // +-, */, +-
        return 4 + (a ? -1 : 1) * (b > 2 ? 1 : 16) + (c ? -4 : 4);
        case 3: // +-, */, */
        return 4 + (a ? -1 : 1) * int((b > 2 ? 1.0 : 16.0) * (c > 2 ? 0.25 : 4.0));
        case 4: // */, +-, +-
        return (a > 2 ? 1 : 16) + (b ? -4 : 4) + (c ? -4 : 4);
        case 5: // */, +-, */
        return (a > 2 ? 1 : 16) + (b ? -1 : 1) * (c > 2 ? 1 : 16);
        case 6: // */, */, +-
        return int((a > 2 ? 1.0 : 16.0) * (b > 2 ? 0.25 : 4.0)) + (c ? -4 : 4);
        case 7: // */, */, */
        return floor((a > 2 ? 1.0 : 16.0) * (b > 2 ? 0.25 : 4.0)) * (c > 2 ? 0.25 : 4.0);
    }
}
int main() {
    int n, x;
    char oper[5] = "+-*/";
    cin >> n;
    while (n--) {
        cin >> x;
        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (found) {
                break;
            }
            for (int j = 0; j < 4; j++) {
                if (found) {
                    break;
                }
                for (int k = 0; k < 4; k++) {
                    if (solve(i, j, k) == x) {
                        found = true;
                        cout << "4 " << oper[i] << " 4 " << oper[j] << " 4 " << oper[k] << " 4 = " << x << '\n';
                        break;
                    }
                }
            }
        }
        if (!found) {
            cout << "no solution\n";
        }
    }
}