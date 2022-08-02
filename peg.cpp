#include <iostream>
using namespace std;
int main() {
    string x[7];
    int s = 0;
    for (int i = 0; i < 7; i++) {
        getline(cin, x[i]);
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (x[i][j] != '.') {
                continue;
            }
            s += i > 1 && x[i - 1][j] == 'o' && x[i - 2][j] == 'o';
            s += j > 1 && x[i][j - 1] == 'o' && x[i][j - 2] == 'o';
            s += i < 5 && x[i + 1][j] == 'o' && x[i + 2][j] == 'o';
            s += j < 5 && x[i][j + 1] == 'o' && x[i][j + 2] == 'o';
        }
    }
    cout << s;
    return 0;
}