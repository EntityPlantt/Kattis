// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, g, m, i, j;
    cin >> t;
    while (t--) {
        cin >> g >> m;
        int gm[g], mm[m];
        for (i = 0; i < g; i++) {
            cin >> gm[i];
        }
        for (i = 0; i < m; i++) {
            cin >> mm[i];
        }
        sort(gm, gm + g);
        sort(mm, mm + m);
        i = 0; j = 0;
        while (i < g && j < m) {
            if (gm[i] < mm[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        if (i >= g && j >= m) {
            cout << "uncertain\n";
        }
        else if (i >= g) {
            cout << "MechaGodzilla\n";
        }
        else {
            cout << "Godzilla\n";
        }
    }
    return 0;
}