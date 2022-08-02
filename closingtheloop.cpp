// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool greaterInt(int a, int b) {
    return a > b;
}
int main() {
    int n, s, l, total;
    char x;
    cin >> n;
    for (int c = 1; c <= n; c++) {
        cin >> s;
        vector <int> redKnot, blueKnot;
        for (int i = 0; i < s; i++) {
            cin >> l >> x;
            if (x == 'B') {
                blueKnot.push_back(l);
            }
            else {
                redKnot.push_back(l);
            }
        }
        sort(redKnot.begin(), redKnot.end(), greaterInt);
        sort(blueKnot.begin(), blueKnot.end(), greaterInt);
        total = 0;
        while (redKnot.size() > blueKnot.size()) {
            redKnot.pop_back();
        }
        while (redKnot.size() < blueKnot.size()) {
            blueKnot.pop_back();
        }
        total = -2 * (int) redKnot.size();
        for (int i = 0; i < redKnot.size(); i++) {
            total += redKnot[i] + blueKnot[i];
        }
        cout << "Case #" << c << ": " << total << '\n';
    }
    return 0;
}