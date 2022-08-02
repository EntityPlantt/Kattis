// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, c = 0;
    cin >> n;
    vector <pair <int, int>> intervals(n);
    vector <vector <int>> intersections(2 * n);
    vector <bool> fulfilled(n, false);
    for (pair <int, int> &x : intervals) {
        cin >> x.first >> x.second;
    }
    size_t now = distance(fulfilled.begin(), find(fulfilled.begin(), fulfilled.end(), false));
    while (now < fulfulled.size()) {
        int bestSz = 1, best = 1;
        now = distance(fulfilled.begin(), find(fulfilled.begin(), fulfilled.end(), false));
    }
    for (int i = intervals[now].first; i <= intervals[now].second; i++) {
        if (bestSz < intersections[i].size()) {
            bestSz = intersections[i].size();
            best = i;
        }
    }
}