#include <iostream>
using namespace std;
int main() {
    int c, n, p = 0;
    cin >> c >> n;
    while (n--) {
        int a, b, v;
        cin >> a >> b >> v;
        p -= a;
        p += b;
        if (p < 0 || p > c || (v && c > p) || (!n && p + v)) {
            cout << "im";
            break;
        }
    }
    cout << "possible";
    return 0;
}