#include <iostream>
using namespace std;
int main() {
    string s, out;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            out = string(out.begin(), out.end() - 1);
        }
        else {
            out += s[i];
        }
    }
    cout << out;
}