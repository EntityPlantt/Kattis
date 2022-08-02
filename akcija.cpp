#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	size_t sum = 0;
	cin >> n;
	size_t books[n];
	for (int i = 0; i < n; i++) {
		cin >> books[i];
	}
	sort(books, books + n);
	reverse(books, books + n);
	for (int i = 0; i < n; i += 3) {
		if (i < n - 1) {
			sum += books[i + 1];
		}
		sum += books[i];
	}
	cout << sum;
	return 0;
}