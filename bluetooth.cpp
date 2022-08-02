// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
	bool upperLeft[8], upperRight[8], lowerLeft[8], lowerRight[8], disabledLeft = false, disabledRight = false;
	memset(upperLeft, true, sizeof(upperLeft));
	memset(upperRight, true, sizeof(upperRight));
	memset(lowerLeft, true, sizeof(lowerLeft));
	memset(lowerRight, true, sizeof(lowerRight));
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a, b, status;
		cin >> a >> b >> status;
		if (status == 'b') {
			if (isdigit(a)) {
				disabledRight = true;
			}
			else {
				disabledLeft = true;
			}
			if (disabledLeft && disabledRight) {
				cout << 2;
				return 0;
			}
		}
		else if (a == '-') {
			lowerLeft[b - '1'] = false;
		}
		else if (a == '+') {
			upperLeft[b - '1'] = false;
		}
		else if (b == '-') {
			lowerRight[a - '1'] = false;
		}
		else if (b == '+') {
			upperRight[a - '1'] = false;
		}
	}
	if (!disabledLeft && count(lowerLeft, lowerLeft + 8, true) && count(upperLeft, upperLeft + 8, true)) {
		cout << 0;
	}
	else if (!disabledRight && count(lowerRight, lowerRight + 8, true) && count(upperRight, upperRight + 8, true)) {
		cout << 1;
	}
	else {
		cout << 2;
	}
	return 0;
}