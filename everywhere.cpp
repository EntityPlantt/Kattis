// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <set>
using namespace std;
main() {
    int t, n;
    cin >> t;
    string x;
    while (t--) {
        cin >> n;
        set <string> s;
        while (n--) {
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << '\n';
    }
    return 0;
}