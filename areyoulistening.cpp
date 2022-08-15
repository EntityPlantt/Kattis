// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int mx, my, n, i;
    cin >> mx >> my >> n;
    vector <int> ex(n), ey(n), er(n);
    for (i = 0; i < n; i++) {
        cin >> ex[i] >> ey[i] >> er[i];
    }
    for (i = 0; i < 3000; i++) {
        int sawBy = 0;
        for (int j = 0; j < n; j++) {
            sawBy += sqrt(double(pow(mx - ex[j], 2)) + double(pow(my - ey[j], 2))) <= double(i + er[j]);
            if (sawBy > 2) {
                break;
            }
        }
        if (sawBy > 2) {
            break;
        }
    }
    cout << max(--i, 0);
    return 0;
}