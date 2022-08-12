// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    size_t n, o = 0;
    cin >> n;
    for (size_t i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            n /= i--;
            o++;
        }
    }
    cout << o + 1;
    return 0;
}