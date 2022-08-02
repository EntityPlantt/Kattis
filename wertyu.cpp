#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string str, keyboard[4] = {
        "`1234567890-=",
        "QWERTYUIOP[]\\",
        "ASDFGHJKL;'",
        "ZXCVBNM,./"
    };
    getline(cin, str);
    for (char &x : str) {
        if (x == ' ') {
            cout << x;
        }
        else {
            for (int i = 0; i < 4; i++) {
                if (find(keyboard[i].begin(), keyboard[i].end(), x) != keyboard[i].end()) {
                    cout << *(find(keyboard[i].begin(), keyboard[i].end(), x) - 1);
                    break;
                }
            }
        }
    }
    return 0;
}