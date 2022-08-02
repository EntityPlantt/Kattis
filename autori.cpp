#include <iostream>
using namespace std;
int main() {
	string n;
	cin >> n;
	for (char& x : n) {
		if (x >= 'A' && x <= 'Z') {
			cout << x;
		}
	}
	return 0;
}