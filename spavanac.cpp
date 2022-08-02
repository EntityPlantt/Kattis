#include <iostream>
using namespace std;
main() {
    int a, b;
    cin >> a >> b;
    b -= 45;
    if (b < 0) {
        b += 60;
        a--;
    }
    if (a < 0) {
        a += 24;
    }
    cout << a << ' ' << b;
}