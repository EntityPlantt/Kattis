// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
typedef double dbl;
#define PI 3.14159265358979323846
int main() {
    int m, n, ax, ay, bx, by;
    dbl r;
    cin >> m >> n >> r >> ax >> ay >> bx >> by;
    cout << setprecision(15)
    << (dbl) abs(ay - by) * r / dbl(n) + (dbl) min(ay, by) * r / dbl(n) * (dbl) abs(ax - bx) / dbl(m) * PI;
    return 0;
}