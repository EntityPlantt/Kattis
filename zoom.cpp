#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1, x; i <= n; i++) {
        cin >> x;
        if (i % k == 0) {
            cout << x << ' ';
        }
    }
    return 0;
}