// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int vars[3];
    cin >> vars[0] >> vars[1] >> vars[2];
    sort(vars, vars + 3);
    char c;
    while (cin >> c) {
        cout << vars[c - 'A'] << ' ';
    }
    return 0;
}