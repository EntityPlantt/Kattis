// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    size_t n, x, now = 0, last = 0;
    cin >> n >> x;
    size_t arr[n];
    for (size_t i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (size_t i = 0; i < n; i++) {
        last = now;
        now = arr[i];
        if (last + now > x) {
            cout << max(i, size_t(1));
            return 0;
        }
    }
    cout << n;
    return 0;
}