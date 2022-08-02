#include <iostream>
using namespace std;
string s, msg;
int indent = 0;
void output() {
    for (int i = 0; i < indent; i++) {
        cout << "  ";
    }
    cout << msg << '\n';
    msg = "";
}
int main() {
    getline(cin, s);
    for (char &x : s) {
        if (x == '{') {
            msg = "{";
            output();
            indent++;
        }
        else if (x == '}') {
            if (msg != "") {
                output();
            }
            msg = "}";
            indent--;
        }
        else if (x == ',') {
            msg += x;
            output();
        }
        else {
            msg += x;
        }
    }
    output();
    return 0;
}