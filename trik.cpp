// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
main() {
    string s;
    cin >> s;
    bool a[3] = {true, false, false};
    for (char &x : s) {
        switch (x) {
            case 'A':
            swap(a[0], a[1]);
            break;
            case 'B':
            swap(a[1], a[2]);
            break;
            case 'C':
            swap(a[0], a[2]);
            break;
        }
    }
    cout << distance(a - 1, find(a, a + 3, true));
    return 0;
}