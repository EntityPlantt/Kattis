// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <set>
using namespace std;
set <int> canA, canB, cantA, cantB;
int s, e, i, j; bool ok;
string x;
int main() {
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	cin >> s >> e;
	for (i = s; i <= e; i++) {
		cin >> x;
		if (x.size() == 8) {
			for (j = 1; j * j <= i; j++) {
				if (!(i % j)) {
					canA.insert(j); canA.insert(i / j);
					canB.insert(j); canB.insert(i / j);
				}
			}
		}
		else if (x[0] == 'F') {
			for (j = 1; j * j <= i; j++) {
				if (!(i % j)) {
					canA.insert(j); canA.insert(i / j);
				}
			}
			cantB.insert(i);
		}
		else if (x[0] == 'B') {
			for (j = 1; j * j <= i; j++) {
				if (!(i % j)) {
					canB.insert(j); canB.insert(i / j);
				}
			}
			cantA.insert(i);
		}
		else {
			cantA.insert(i);
			cantB.insert(i);
		}
	}
	#define print_set(_set) // printf(#_set ":"); for (const int &si : _set) printf(" %d", si); printf("\n");
	print_set(canA);
	print_set(cantA);
	print_set(canB);
	print_set(cantB);
	ok = false;
	for (const int &si : canA) {
		ok = true;
		for (const int &sj : cantA) {
			if (!(sj % si)) {
				ok = false;
				break;
			}
		}
		if (ok) {
			printf("%d ", si);
			break;
		}
	}
	if (!ok) printf("%d ", e + 1);
	ok = false;
	for (const int &si : canB) {
		ok = true;
		for (const int &sj : cantB) {
			if (!(sj % si)) {
				ok = false;
				break;
			}
		}
		if (ok) {
			printf("%d", si);
			break;
		}
	}
	if (!ok) printf("%d", e + 1);
	return 0;
}