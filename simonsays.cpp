// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
main() {
    int n;
    cin >> n;
    string s;
    cin.ignore();
    while (n--) {
        getline(cin, s);
        if (s.substr(0, 11) == "Simon says ") {
            cout << s.substr(11) << '\n';
        }
    }
    return 0;
}