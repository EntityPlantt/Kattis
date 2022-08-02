#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b) {
    for (int i = min(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
int main() {
    int p, q, s;
    cin >> p >> q >> s;
    cout << (lcm(p, q) > s ? "no" : "yes");
    return 0;
}