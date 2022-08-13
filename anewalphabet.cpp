// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string new_alphabet[26] = {
        "@", "8", "(", "|)", "3",
        "#", "6", "[-]", "|", "_|",
        "|<", "1", "[]\\/[]", "[]\\[]",
        "0", "|D", "(,)", "|Z", "$",
        "']['", "|_|", "\\/", "\\/\\/",
        "}{", "`/", "2"
    };
    for (char &x : s) {
        if (isupper(x)) {
            cout << new_alphabet[x - 'A'];
        }
        else if (islower(x)) {
            cout << new_alphabet[x - 'a'];
        }
        else {
            cout << x;
        }
    }
    return 0;
}