// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <stack>
using namespace std;
int main() {
    int n, k, i, x;
    string s;
    cin >> n >> k;
    stack <int> st;
    while (k--) {
        cin >> s;
        if (s == "undo") {
            cin >> x;
            while (x--) st.pop();
        }
        else {
            st.push(stoi(s) % n);
        }
    }
    x = 0;
    while (!st.empty()) {
        x += st.top();
        x %= n;
        st.pop();
    }
    cout << (x + n) % n;
    return 0;
}