// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <pair <int, int>> factorized;
    for (int i = 2; n > 1; i++) {
        if (n % i == 0) {
            n /= i;
            if (factorized.empty() || factorized.back().first != i) {
                factorized.push_back(make_pair(i, 0));
            }
            factorized.back().second++;
            i--;
        }
    }
    cout << max_element(factorized.begin(), factorized.end(), [](pair <int, int> a, pair <int, int> b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    })->first;
    return 0;
}