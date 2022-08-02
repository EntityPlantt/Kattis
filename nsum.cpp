#include <iostream>
using namespace std;
int main() {
    short n, t = 0, x;
    cin >> n;
    while (n--) {
        cin >> x;
        t += x;
    }
    cout << t;
    return 0;
}