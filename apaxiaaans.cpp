// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
main() {
    string s;
    cin >> s;
    char l = '\0';
    for (char &x : s) {
        if (l != x) {
            cout << x;
            l = x;
        }
    }
    return 0;
}