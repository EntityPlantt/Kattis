#include <iostream>
#include <map>
using namespace std;
int main() {
	int n, x = 0;
	char b;
	cin >> n >> b;
	map <char, int> values[2];
	values[false]['A'] = 11;
	values[false]['K'] = 4;
	values[false]['Q'] = 3;
	values[false]['J'] = 2;
	values[false]['T'] = 10;
	values[false]['9'] = 0;
	values[false]['8'] = 0;
	values[true]['A'] = 11;
	values[true]['K'] = 4;
	values[true]['Q'] = 3;
	values[true]['J'] = 20;
	values[true]['T'] = 10;
	values[true]['9'] = 14;
	values[true]['8'] = 0;
	values[true]['7'] = 0;
	for (int i = 0; i < n * 4; i++) {
		char num, suit;
		cin >> num >> suit;
		x += values[suit == b][num];
	}
	cout << x;
	return 0;
}