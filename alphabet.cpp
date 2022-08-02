#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    size_t n = s.size();
    vector <int> dyn(n, 1);
    for (size_t i = 1; i < n; i++) {
        for (size_t j = 0; j < i; j++) {
            if (s[j] < s[i] && dyn[j] >= dyn[i]) {
                dyn[i] = dyn[j] + 1;
            }
        }
    }
    cout << 26 - *max_element(dyn.begin(), dyn.end());
    return 0;
}