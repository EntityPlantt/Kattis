// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    string s;
    int c = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if ((i % 3 == 0 && tolower(s[i]) != 'p')
        || (i % 3 == 1 && tolower(s[i]) != 'e')
        || (i % 3 == 2 && tolower(s[i]) != 'r')) c++;
    }
    cout << c;
    return 0;
}