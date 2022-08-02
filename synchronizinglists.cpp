// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        vector <int> a(n), aSorted, bSorted(n);
        for (int &x : a) {
            cin >> x;
        }
        for (int &x : bSorted) {
            cin >> x;
        }
        aSorted = a;
        sort(aSorted.begin(), aSorted.end());
        sort(bSorted.begin(), bSorted.end());
        for (int i = 0; i < n; i++) {
            cout << bSorted[distance(aSorted.begin(), find(aSorted.begin(), aSorted.end(), a[i]))] << '\n';
        }
        cout << '\n';
    }
    return 0;
}