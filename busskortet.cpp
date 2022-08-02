// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int k, t = 0;
    cin >> k;
    k = ceil(float(k) / 100.0);
    t += k / 5;
    k %= 5;
    t += k / 2;
    k %= 2;
    t += k;
    cout << t;
}