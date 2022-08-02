// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    cout << s.substr(s.find('a'));
    return 0;
}