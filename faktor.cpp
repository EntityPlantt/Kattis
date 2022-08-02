#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, i, b = 0;
    cin >> a >> i;
    while (ceil(double(++b) / double(a)) < i);
    cout << b;
    return 0;
}