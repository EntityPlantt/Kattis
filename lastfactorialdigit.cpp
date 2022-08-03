// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int lfd[10] = {1, 2, 6, 4, 0, 0, 0, 0, 0, 0};
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << lfd[--n] << '\n';
    }
    return 0;
}