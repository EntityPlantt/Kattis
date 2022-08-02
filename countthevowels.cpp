// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
main() {
    string x;
    getline(cin, x);
    cout << count(x.begin(), x.end(), 'A') + count(x.begin(), x.end(), 'E')
    + count(x.begin(), x.end(), 'I') + count(x.begin(), x.end(), 'O')
    + count(x.begin(), x.end(), 'U') + count(x.begin(), x.end(), 'a')
    + count(x.begin(), x.end(), 'e') + count(x.begin(), x.end(), 'i')
    + count(x.begin(), x.end(), 'o') + count(x.begin(), x.end(), 'u');
    return 0;
}