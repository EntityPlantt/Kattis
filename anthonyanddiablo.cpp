// GitHub: EntityPlantt/Kattis
// Not working
#include <iostream>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    if (16 * a <= b * b) {
        cout << "Diablo is happy!";
    }
    else {
        cout << "Need more materials!";
    }
    return 0;
}