#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
typedef long double ldbl;
struct proportion {
    int a, b;
    bool negative;
    proportion(int a = 1, int b = 1, bool negative = false) {
        this->a = a;
        this->b = b;
        this->negative = negative;
        this->makeCoprime();
    }
    proportion operator*(proportion p) {
        return proportion(this->a * p.a, this->b * p.b, this->negative ^ p.negative).makeCoprime();
    }
    proportion operator*=(proportion p) {
        return *this = *this * p;
    }
    proportion makeCoprime() {
        for (int i = 2; i <= this->a && i <= this->b && this->a > 1 && this->b > 1; i++) {
            if (this->a % i == 0 && this->b % i == 0) {
                this->a /= i;
                this->b /= i;
                i--;
            }
        }
        return *this;
    }
    proportion operator-() {
        return proportion(this->a, this->b, !this->negative);
    }
    proportion operator--() {
        return *this = -*this;
    }
    bool operator==(proportion p) {
        return this->a == p.a && this->b == p.b && this->negative == p.negative;
    }
    bool operator!=(proportion p) {
        return !(*this == p);
    }
};
struct coord {
    int x, y;
    coord(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    ldbl distanceFrom(coord crd) {
        return sqrt(ldbl(pow(this->x - crd.x, 2) + pow(this->x - crd.x, 2)));
    }
    ldbl operator-(coord crd) {
        return this->distanceFrom(crd);
    }
};
struct gear {
    coord crd;
    int radius;
    gear(coord coordinates = {0, 0}, int radius = 0) {
        this->crd = coordinates;
        this->radius = radius;
    }
    bool connectsWith(gear otherGear) {
        return this->crd - otherGear.crd <= this->radius + otherGear.radius;
    }
};
int main() {
    int n;
    cin >> n;
    vector <gear> gears(n);
    for (gear &x : gears) {
        cin >> x.crd.x >> x.crd.y >> x.radius;
    }
    vector <bool> hasMoved(n, false);
    vector <proportion> proportions(n);
    queue <int> bfs;
    bfs.push(0);
    hasMoved[0] = true;
    while (!bfs.empty()) {
        int now = bfs.front();
        bfs.pop();
        for (int i = 0; i < n; i++) {
            if (now == i) {
                continue;
            }
            if (gears[now].connectsWith(gears[i])) {
                if (hasMoved[i]) {
                    if (proportions[i] != -proportions[now] * proportion(gears[i].radius, gears[now].radius)) {
                        cout << -1;
                        return 0;
                    }
                }
                else {
                    proportions[i] = -proportions[now] * proportion(gears[i].radius, gears[now].radius);
                    hasMoved[i] = true;
                    bfs.push(i);
                }
            }
        }
    }
    if (hasMoved.back()) {
        cout << proportions.back().a << ' ' << proportions.back().b * (proportions.back().negative ? -1 : 1);
    }
    else {
        cout << 0;
    }
    return 0;
}