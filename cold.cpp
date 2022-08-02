// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int cnt = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 0) {
            cnt++;
        }
    }
    cout << cnt;
}