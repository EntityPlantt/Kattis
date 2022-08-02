// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (i % 3 == 2) {
			cout << "..*.";
		}
		else {
			cout << "..#.";
		}
	}
	cout << ".\n";
	for (int i = 0; i < s.size(); i++) {
		if (i % 3 == 2) {
			cout << ".*.*";
		}
		else {
			cout << ".#.#";
		}
	}
	cout << ".\n";
	for (int i = 0; i < s.size(); i++) {
		if (i % 3 == 2) {
			cout << "*." << s[i] << '.';
		}
		else if (i % 3 == 0 && i != 0) {
			cout << "*." << s[i] << '.';
		}
		else {
			cout << "#." << s[i] << '.';
		}
	}
	if (s.size() % 3 == 0) {
		cout << "*\n";
	}
	else {
		cout << "#\n";
	}
	for (int i = 0; i < s.size(); i++) {
		if (i % 3 == 2) {
			cout << ".*.*";
		}
		else {
			cout << ".#.#";
		}
	}
	cout << ".\n";
	for (int i = 0; i < s.size(); i++) {
		if (i % 3 == 2) {
			cout << "..*.";
		}
		else {
			cout << "..#.";
		}
	}
	cout << '.';
	return 0;
}