// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
size_t stringScore(string s) {
	size_t counter = 0;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == s[i + 1] && find(vowels, vowels + 6, s[i]) != vowels + 6) {
			counter++;
		}
	}
	return counter;
}
int main() {
	int n;
	cin >> n;
	while (n) {
		string best = "", s;
		size_t bestScore = 0;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (bestScore <= stringScore(s)) {
				best = s;
				bestScore = stringScore(s);
			}
		}
		cout << best << endl;
		cin >> n;
	}
	return 0;
}