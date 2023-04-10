// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <vector>
using namespace std;
int n, arr[26], i;
bool b; char c;
int main() {
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> c;
        if (c == 'T') arr[i] = true;
    }
    vector <bool> v;
    while (cin >> c) {
        switch (c) {
            case '+':
            b = v.back(); v.pop_back();
            b |= v.back(); v.pop_back();
            v.push_back(b);
            break;
            case '*':
            b = v.back(); v.pop_back();
            b &= v.back(); v.pop_back();
            v.push_back(b);
            break;
            case '-':
            b = !v.back(); v.pop_back();
            v.push_back(b);
            break;
            default:
            v.push_back(arr[c - 'A']);
            break;
        }
        /*
        cout << "Array now:";
        for (i = 0; i < v.size(); i++) cout << (v[i] ? " T" : " F");
        cout << '\n';
        */
    }
    cout << (v.back() ? 'T' : 'F');
    return 0;
}