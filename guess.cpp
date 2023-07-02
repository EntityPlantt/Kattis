// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    string s;
    int l = 1, r = 1000, m;
    while (l <= r) {
        m = (l + r) / 2;
        cout << m << endl;
        cin >> s;
        if (s == "correct") break;
        if (s == "lower") r = m - 1;
        else l = m + 1;
    }
    return 0;
}