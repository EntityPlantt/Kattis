#include <iostream>
using namespace std;
int main() {
    int n, r, e, c;
    cin >> n;
    while (n--) {
        cin >> r >> e >> c;
        if (r < e - c) {
            cout << "advertise\n";
        }
        else if (r > e - c) {
            cout << "do not advertise\n";
        }
        else {
            cout << "does not matter\n";
        }
    }
    return 0;
}