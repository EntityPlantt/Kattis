#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    if (n > k) {
        cout << k + n / k - 2 + n - (n / k) * k;
    }
    else {
        cout << n;
    }
    return 0;
}