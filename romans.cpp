// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    long double n;
    cin >> n;
    cout << fixed << setprecision(0) << round(n * 5280000.0 / 4854.0);
    return 0;
}