// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    bool answer = false;
    for (int i = 0; i * a <= n; i++) {
        for (int j = 0; i * a + j * b <= n; j++) {
            if ((n - i * a - j * b) % c == 0) {
                cout << i << ' ' << j << ' ' << (n - i * a - j * b) / c << '\n';
                answer = true;
            }
        }
    }
    if (!answer) {
        cout << "impossible";
    }
}