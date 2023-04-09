// GitHub: EntityPlantt/Kattis
// Not Working
#include <cstdio>
#include <set>
int min(int a, int b) {
    return a < b ? a : b;
}
int main() {
    int n, i, maxH = 0, j = 0, maxB = 0, minB = 0;
    scanf("%d", &n);
    int h[n];
    std::multiset <int> m;
    for (i = 0; i < n; i++) {
        scanf("%d", h + i);
        if (i - j > 1) {
            m.insert(h[i - 1]);
        }
        while (i - j > 1 && *m.rbegin() >= min(h[i], h[j])) {
            m.erase(m.find(h[j++]));
        }
        if (i - j > 1 && min(h[i], h[j]) - *m.begin() > maxH) {
            maxH = min(h[i], h[j]) - *m.begin();
        }
    }
    printf("%d", maxH);
    return 0;
}