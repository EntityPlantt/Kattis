// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string prev;
    size_t n;
    cin >> prev >> n;
    vector <size_t> available(26, 0);
    vector <vector <string>> opts(26);
    for (size_t i = 0; i < n; i++) {
        string x;
        cin >> x;
        opts[x[0] - 'a' - 1].push_back(x);
        available[x[0] - 'a' - 1]++;
    }
    if (available[prev.back() - 'a' - 1]) {
        for (string &x : opts[prev.back() - 'a' - 1]) {
            available[x[0] - 'a' - 1]--;
            if (!available[x.back() - 'a' - 1]) {
                cout << x << '!';
                return 0;
            }
            available[x[0] - 'a' - 1]++;
        }
        cout << opts[prev.back() - 'a' - 1][0];
    }
    else {
        cout << '?';
    }
}