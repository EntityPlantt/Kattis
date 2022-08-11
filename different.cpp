// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    size_t a, b;
    while (cin >> a >> b) {
        if (a < b) swap(a, b);
        cout << a - b << '\n';
    }
}