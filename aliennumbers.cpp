// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    string nStr, sys1, sys2;
    size_t n = 0;
    for (int i = 1; i <= t; i++) {
        cin >> nStr >> sys1 >> sys2;
        while (!nStr.empty()) {
            n *= sys1.size();
            n += sys1.find(nStr[0]);
            nStr = nStr.substr(1);
        }
        do {
            nStr = sys2[n % sys2.size()] + nStr;
            n /= sys2.size();
        } while (n);
        cout << "Case #" << i << ": " << nStr << '\n';
    }
    return 0;
}