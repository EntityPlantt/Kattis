#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    bool has[26];
    while (n--) {
        string phrase;
        getline(cin, phrase);
        memset(has, false, sizeof(has));
        for (char &x : phrase) {
            if (islower(x)) {
                has[x - 'a'] = true;
            }
            if (isupper(x)) {
                has[x - 'A'] = true;
            }
        }
        bool missing = false;
        for (int i = 0; i < 26; i++) {
            if (!has[i]) {
                if (!missing) {
                    missing = true;
                    cout << "missing ";
                }
                cout << char('a' + i);
            }
        }
        if (!missing) {
            cout << "pangram";
        }
        cout << '\n';
    }
    return 0;
}