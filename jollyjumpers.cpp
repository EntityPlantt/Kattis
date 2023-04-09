// GitHub: EntityPlantt/Kattis
#include <cstdio>
#include <cstring>
#include <math.h>
int main() {
    int n, x, y;
    while (scanf("%d", &n) != EOF) {
        bool jolly[n], wrong = false;
        memset(jolly, 0, sizeof(jolly));
        scanf("%d", &x);
        for (int i = 1; i < n; i++) {
            scanf("%d", &y);
            if (wrong) continue;
            x = abs(x - y);
            if (x < 1 || x >= n || jolly[x]) {
                wrong = true;
            }
            else {
                jolly[x] = true;
            }
            x = y;
        }
        if (wrong) printf("Not jolly\n");
        else printf("Jolly\n");
    }
    return 0;
}