// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <map>
using namespace std;
int main() {
    size_t n, q;
    cin >> n;
    string man, party;
    cin.ignore();
    map <string, string> parties;
    map <string, size_t> votes;
    while (n--) {
        getline(cin, man);
        getline(cin, party);
        parties[man] = party;
    }
    cin >> q;
    cin.ignore();
    party = "tie";
    n = 0;
    while (q--) {
        getline(cin, man);
        if (parties[man] != "") {
            if (++votes[parties[man]] > n) {
                party = parties[man];
                n = votes[parties[man]];
            }
            else if (votes[parties[man]] == n) {
                party = "tie";
            }
        }
    }
    cout << party;
}