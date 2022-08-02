// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    size_t n, b, h, w, costNow, bedsNow, min = -1;
    cin >> n >> b >> h >> w;
    while (h--) {
        cin >> costNow;
        for (int i = 0; i < w; i++) {
            cin >> bedsNow;
            if (bedsNow >= n && n * costNow <= b && n * costNow < min) {
                min = costNow * n;
            }
        }
    }
    if (min == size_t(-1)) {
        cout << "stay home";
    }
    else {
        cout << min;
    }
    return 0;
}