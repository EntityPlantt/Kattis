// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        map <string, vector <string>> out;
        set <string> allOrders;
        string s, orderer;
        cin.ignore();
        while (n--) {
            getline(cin, s);
            orderer = s.substr(0, s.find(' '));
            s = s.substr(s.find(' ') + 1);
            while (s.find(' ') < string::npos) {
                allOrders.insert(s.substr(0, s.find(' ')));
                out[s.substr(0, s.find(' '))].push_back(orderer);
                s = s.substr(s.find(' ') + 1);
            }
            allOrders.insert(s);
            out[s].push_back(orderer);
        }
        for (string order : allOrders) {
            cout << order;
            for (string orderer : out[order]) {
                cout << ' ' << orderer;
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}