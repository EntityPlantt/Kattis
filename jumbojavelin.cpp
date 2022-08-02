// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
main() {
    int n, t = 1, x;
    cin >> n;
    while (n--) {
        cin >> x;
        t += --x;
    }
    cout << t;
}