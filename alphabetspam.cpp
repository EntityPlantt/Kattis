#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0, d = 0;
    for (char &x : s) {
        if (x == '_') {
            a++;
        }
        else if (islower(x)) {
            b++;
        }
        else if (isupper(x)) {
            c++;
        }
        else {
            d++;
        }
    }
    cout << setprecision(15)
    << (long double) a / (long double) s.size() << '\n'
    << (long double) b / (long double) s.size() << '\n'
    << (long double) c / (long double) s.size() << '\n'
    << (long double) d / (long double) s.size() << '\n';
}