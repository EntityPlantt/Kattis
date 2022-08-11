#include <iostream>
using namespace std;
int main() {
    int n, t = 0, d = 0, x;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x >= 0) {
            d++;
            t += x;
        }
    }
    cout.precision(17);
    cout << double(t) / double(d);
}