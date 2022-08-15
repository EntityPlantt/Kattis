// GitHub: EntityPlantt/Kattis
// Not Working
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s, hexadec = "0123456789ABCDEF";
    cin >> s;
    vector <bool> barr;
    while ((barr.size() + s.size() * 3) % 4) {
        barr.push_back(false);
    }
    for (int i = 0; i < s.size(); i++) {
        barr.push_back((s[i] - '0') & 4);
        barr.push_back((s[i] - '0') & 2);
        barr.push_back((s[i] - '0') & 1);
    }
    for (int i = 0; i < barr.size(); i += 4) {
        cout << hexadec[int(barr[i] * 8) + int(barr[i + 1] * 4) + int(barr[i + 2] * 2) + int(barr[i + 3])];
    }
    return 0;
}