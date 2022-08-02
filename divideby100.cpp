#include <iostream>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int decimal = a.size() - b.size() + 1;
	while (decimal++ <= 0) {
		a = '0' + a;
	}
	while (a.size() >= decimal && a.back() == '0') {
		a.erase(a.end() - 1);
	}
	string output = a;
	if (decimal < a.size())
		output = a.substr(0, decimal - 1) + '.' + a.substr(decimal - 1);
	cout << output;
	return 0;
}