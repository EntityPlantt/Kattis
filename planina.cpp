#include <iostream>
using namespace std;
int main() {
    int n, p = 2;
    cin >> n;
    while (n--) {
        p += p - 1;
    }
    cout << p * p;
    return 0;
}