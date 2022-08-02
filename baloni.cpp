#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, arrows = 0;
	cin >> n;
	vector <int> arr(n);
	vector <bool> popped(n, false);
	for (int &x : arr)
		cin >> x;
	while (find(popped.begin(), popped.end(), false) != popped.end()) {
		arrows++;
		int arrowHeight = arr[distance(popped.begin(), find(popped.begin(), popped.end(), false))];
		for (int i = 0; i < arr.size(); i++) {
			if (arrowHeight == arr[i] && !popped[i]) {
				popped[i] = true;
				arrowHeight--;
			}
		}
	}
	cout << arrows;
	return 0;
}