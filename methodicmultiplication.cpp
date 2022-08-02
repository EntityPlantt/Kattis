#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string x, y;
    cin >> x >> y;
    int r = count(x.begin(), x.end(), 'S') * count(y.begin(), y.end(), 'S');
    for (int i = 0; i < r; i++) {
        cout << "S(";
    }
    cout << 0;
    for (int i = 0; i < r; i++) {
        cout << ')';
    }
    return 0;
}