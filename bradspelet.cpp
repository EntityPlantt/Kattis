#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    cout << ((int(ceil(log2(m)) + ceil(log2(n))) % 2) ? 'A' : 'B');
    return 0;
}