#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n, r = 0;
    cin >> n;
    queue <bool> binary;
    while (n) {
        binary.push(n % 2);
        n /= 2;
    }
    while (!binary.empty()) {
        r *= 2;
        r += binary.front();
        binary.pop();
    }
    cout << r;
    return 0;
}