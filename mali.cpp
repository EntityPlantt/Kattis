#include <bits/stdc++.h>
using namespace std;
template <typename Type>
Type* copyArr(Type* b, Type* e) {
	Type* r = new Type[distance(b, e)];
	for (int i = 0; i < distance(b, e); i++) {
		r[i] = *(b + i);
	}
	return r;
}
int main() {
	int n;
	cin >> n;
	int *a = new int[100], *b = new int[100];
	for (int i = 0; i < 100; i++) {
		a[i] = b[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		int ai, bi;
		cin >> ai >> bi;
		a[ai - 1]++;
		b[bi - 1]++;
		int *aClone, *bClone;
		aClone = copyArr(a, a + 100);
		bClone = copyArr(b, b + 100);
		int maxn = 0, numbersLeft = i + 1, smallest = 0, biggest = 99;
		while (numbersLeft) {
			if (!aClone[smallest]) {
				smallest++;
				continue;
			}
			if (!bClone[biggest]) {
				biggest--;
				continue;
			}
			int deletion = min(aClone[smallest], bClone[biggest]);
			if (maxn < smallest + biggest) {
				maxn = smallest + biggest;
			}
			numbersLeft -= deletion;
			aClone[smallest] -= deletion;
			bClone[biggest] -= deletion;
		}
		cout << maxn + 2 << endl;
	}
	return 0;
}