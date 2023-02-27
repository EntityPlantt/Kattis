// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <set>
using namespace std;
int main() {
    set <string> parts;
    int n, k, i;
    string x;
    cin >> n >> k;
    for (i = 0; i < k; i++) {
        cin >> x;
        parts.insert(x);
        if (parts.size() == n) {
            cout << i + 1;
            return 0;
        }
    }
    cout << "paradox avoided";
    return 0;
}