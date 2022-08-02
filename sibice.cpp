// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <cmath>
using namespace std;
main() {
    int n, w, h, l;
    cin >> n >> w >> h;
    double max = sqrt(double(w * w + h * h));
    while (n--) {
        cin >> l;
        cout << (l > max ? "NE\n" : "DA\n");
    }
}