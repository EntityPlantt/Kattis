// GitHub: EntityPlantt/Kattis
#include <cstdio>
int w, h, i, j;
char map[705][705];
double dp[1405][1405];
#define side 5
#define arc 7.853981633974483
int main() {
	scanf("%d%d", &w, &h);
	for (i = 0; i < w; i++) {
		scanf(" %700s", map[i]);
	}
	for (i = 0; i <= w << 1; i++) {
		for (j = 0; j <= h << 1; j++) {
			if (!i && !j || i & 1 && j & 1) continue;
			dp[i][j] = 490005;
			if (i & 1 && j && map[i - 1 >> 1][j - 1 >> 1] == 'O' && dp[i - 1][j - 1] + arc < dp[i][j]) dp[i][j] = dp[i - 1][j - 1] + arc;
			if (j & 1 && i && map[i - 1 >> 1][j - 1 >> 1] == 'O' && dp[i - 1][j - 1] + arc < dp[i][j]) dp[i][j] = dp[i - 1][j - 1] + arc;
			if (i && !(j & 1) && dp[i - 1][j] + side < dp[i][j]) dp[i][j] = dp[i - 1][j] + side;
			if (j && !(i & 1) && dp[i][j - 1] + side < dp[i][j]) dp[i][j] = dp[i][j - 1] + side;
		}
	}
	printf("%lf", dp[w << 1][h << 1]);
	return 0;
}