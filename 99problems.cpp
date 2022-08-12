// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n < 100) {
        cout << 99;
    }
    else if (n / 100 * 100 + 99 - n > n - n / 100 * 100 + 1) {
        cout << n / 100 * 100 - 1;
    }
    else {
        cout << n / 100 << 99;
    }
    return 0;
}