// GitHub: EntityPlantt/Kattis
#include <cstdio>
int n, d[400], t[3][400], i, j, k, sum[3][400][400], p, q;
bool cannot[3][3][400][400];
#define iter(_it, _val, _lim) for (_it = _val; _it < _lim; _it++)
int main() {
	scanf("%d", &n);
	iter (i, 0, n) scanf("%d", d + i);
	iter (p, 0, 3) iter (i, 0, n) scanf("%d", t[p] + i);
	iter (p, 0, 3) iter (i, 0, n) {
		// printf("%2d:", i);
		iter (j, i + 1, n) {
			sum[p][i][j] += sum[p][i][j - 1] + d[j - 1] + t[p][j - 1];
		}
		if (i) sum[p][i][0] = sum[p][i][n - 1] + d[n - 1] + t[p][n - 1];
		iter (j, 1, i) {
			sum[p][i][j] += sum[p][i][j - 1] + d[j - 1] + t[p][j - 1];
		}
		/*iter (j, 0, n) printf(" %3d", sum[p][i][j]);
		printf("\n");*/
	}
	iter (p, 0, 2) iter(q, p + 1, 3) iter(i, 0, n) iter(j, 0, n) iter(k, 0, n) {
		// Test if intervals in sum[p][i][0...n-1] & sum[q][i][0...n-1] overlap
		// printf("sum[p][i][k] = %d, sum[q][j][k] = %d, t[p][k] = %d, t[q][k] = %d\n", sum[p][i][k], sum[q][j][k], t[p][k], t[q][k]);
		if (sum[p][i][k] >= sum[q][j][k] && sum[p][i][k] < sum[q][j][k] + t[q][k]
			|| sum[q][j][k] >= sum[p][i][k] && sum[q][j][k] < sum[p][i][k] + t[p][k]) {
			// printf("Overlap if on island %d from %d and %d come Person %d and Person %d\n", k, i, j, p + 1, q + 1);
			cannot[p][q][i][j] = true;
			break;
		}
	}
	iter (i, 0, n) iter (j, 0, n) iter(k, 0, n) if (!cannot[0][1][i][j] && !cannot[0][2][i][k] && !cannot[1][2][j][k]) {
		printf("%d %d %d", i + 1, j + 1, k + 1);
		return 0;
	}
	printf("impossible");
	return 0;
}