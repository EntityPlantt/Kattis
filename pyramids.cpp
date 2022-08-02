#include <iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin >> n;
    while (n >= i * i) {
        n -= i * i;
        i += 2;
    }
    cout << i / 2;
    return 0;
}