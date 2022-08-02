#include <iostream>
#include <stack>
using namespace std;
void makeCoprime(size_t& a, size_t& b) {
    for (size_t i = 2; i * i <= a && i * i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
            i--;
        }
    }
}
int main() {
    size_t n;
    size_t a = 1, b = 0;
    cin >> n;
    stack <size_t> arr;
    while (n--) {
        size_t x;
        cin >> x;
        arr.push(x);
    }
    while (!arr.empty()) {
        swap(a, b);
        a += arr.top() * b;
        arr.pop();
        makeCoprime(a, b);
    }
    cout << a << '/' << b;
}