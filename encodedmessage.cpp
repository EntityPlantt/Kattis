#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, sz;
    char **square, c;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        sz = sqrt(s.size());
        square = new char*[sz];
        for (int i = 0; i < sz; i++) {
            square[i] = new char[sz];
        }
        for (int i = 0, j; i < sz; i++) {
            for (j = 0; j < sz; j++) {
                square[sz - j - 1][i] = s[i * sz + j];
            }
        }
        for (int i = 0, j; i < sz; i++) {
            for (j = 0; j < sz; j++) {
                cout << square[i][j];
            }
            delete square[i];
        }
        delete square;
        cout << '\n';
    }
    return 0;
}