#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << 1;
    }
    else if (x > 0) {
        cout << 4;
    }
    else if (y > 0) {
        cout << 2;
    }
    else {
        cout << 3;
    }
}