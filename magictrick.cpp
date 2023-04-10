// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <bitset>
using namespace std;
bitset <26> appeared;
string s;
int main() {
    cin >> s;
    for (char &x : s) {
        if (appeared[x - 'a']) {
            cout << 0; return 0;
        }
        appeared.set(x - 'a');
    }
    cout << 1;
    return 0;
}