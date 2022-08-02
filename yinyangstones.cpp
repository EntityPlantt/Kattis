// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string x;
    cin >> x;
    cout << ((float) count(x.begin(), x.end(), 'W') == (float) x.size() / 2.0);
    return 0;
}