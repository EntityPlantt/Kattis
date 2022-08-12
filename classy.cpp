// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector <pair <string, string>> people(n);
        string dummy;
        for (pair <string, string> &x : people) {
            cin >> x.first >> x.second >> dummy;
            x.first = string(x.first.begin(), x.first.end() - 1);
        }
        sort(people.begin(), people.end(), [](pair <string, string> a, pair <string, string> b) -> bool {
            string aC = a.second, bC = b.second, aTC, bTC;
            do {
                if (aC.empty() && bC.empty()) {
                    return a.first < b.first;
                }
                if (aC.find_last_of('-') == aC.npos) {
                    aTC = aC.empty() ? "middle" : aC;
                    aC = "";
                }
                else {
                    aTC = aC.substr(aC.find_last_of('-') + 1);
                    aC = aC.substr(0, aC.find_last_of('-'));
                }
                if (bC.find_last_of('-') == bC.npos) {
                    bTC = bC.empty() ? "middle" : bC;
                    bC = "";
                }
                else {
                    bTC = bC.substr(bC.find_last_of('-') + 1);
                    bC = bC.substr(0, bC.find_last_of('-'));
                }
            } while (aTC[0] == bTC[0]);
            return aTC[0] > bTC[0];
        });
        for (pair <string, string> &x : people) {
            cout << x.first << '\n';
        }
        cout << "==============================\n";
    }
    return 0;
}