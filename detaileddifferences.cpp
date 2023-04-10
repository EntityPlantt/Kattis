// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
string a, b;
int n, i;
int main() {
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << a << '\n' << b << '\n';
        for (i = 0; i < a.size(); i++) {
            cout << (a[i] == b[i] ? '.' : '*');
        }
        cout << "\n\n";
    }
    return 0;
}