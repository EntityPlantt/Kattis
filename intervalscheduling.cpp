// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, t = 0, e = 0;
    cin >> n;
    vector <pair <int, int>> arr(n);
    for (auto &x : arr) {
        cin >> x.first >> x.second;
    }
    sort(arr.begin(), arr.end(), [](pair <int, int> a, pair <int, int> b) {
        return a.second > b.second;
    });
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (e <= arr[i].first) {
            e = arr[i].second;
            t++;
        }
    }
    cout << t;
    return 0;
}