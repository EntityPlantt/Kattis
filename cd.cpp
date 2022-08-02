// GitHub: EntityPlantt/Kattis
// Time Limit Exceeded
#include <iostream>
#include <vector>
using namespace std;
main() {
    size_t n, m, x, t, i;
    while (true) {
        cin >> n >> m;
        if (!n && !m) {
            break;
        }
        t = i = 0;
        vector <size_t> jack;
        while (n--) {
            cin >> x;
            jack.push_back(x);
        }
        while (m--) {
            cin >> x;
            if (i >= jack.size()) {
                break;
            }
            while (jack[i] < x) {
                i++;
                if (i >= jack.size()) {
                    break;
                }
            }
            if (i >= jack.size()) {
                break;
            }
            t += jack[i] == x;
        }
        cout << t << '\n';
    }
    return 0;
}