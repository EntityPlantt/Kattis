// Github: EntityPlantt/Kattis
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n, b;
    cin >> n;
    map <string, pair <string, int>> bdays;
    string a, c;
    while (n--) {
        cin >> a >> b >> c;
        if (bdays[c].second <= b) {
            bdays[c] = {a, b};
        }
    }
    cout << bdays.size();
    string arr[bdays.size()];
    for (auto i = bdays.begin(); i != bdays.end(); i++) {
        arr[distance(bdays.begin(), i)] = i->second.first;
    }
    sort(arr, arr + bdays.size());
    for (int i = 0; i < bdays.size(); i++) {
        cout << '\n' << arr[i];
    }
    return 0;
}