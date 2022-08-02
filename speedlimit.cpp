// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int n;
    while (true) {
        cin >> n;
        if (n < 0) {
            break;
        }
        int total = 0, elapsed = 0;
        while (n--) {
            int mph, now;
            cin >> mph >> now;
            total += mph * (now - elapsed);
            elapsed = now;
        }
        cout << total << " miles\n";
    }
}