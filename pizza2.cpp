#include <iostream>
using namespace std;
int main() {
    long double a, b;
    cin >> a >> b;
    b = a - b;
    cout.precision(6);
    cout << fixed << b * b / a / a * 100;
}