#include <iostream>
using namespace std;
int main() {
    int n, nowStart = 0, nowSize = 1;
    cin >> n;
    while (--n) {
        char x;
        cin >> x;
        if (x == 'L') {
            nowSize++;
        }
        else {
            for (int i = nowStart + nowSize; i > nowStart; i--) {
                cout << i << '\n';
            }
            nowStart += nowSize;
            nowSize = 1;
        }
    }
    for (int i = nowStart + nowSize; i > nowStart; i--) {
        cout << i << '\n';
    }
    return 0;
}