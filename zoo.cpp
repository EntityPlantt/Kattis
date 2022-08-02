// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int list = 1; n > 0; list++) {
		map <string, int> count;
		string s;
		getline(cin, s);
		for (int i = 0; i < n; i++) {
			getline(cin, s);
			for (int j = s.size() - 1; j >= 0; j--) {
				if (s[j] == ' ') {
					s = s.substr(j + 1);
					break;
				}
				else {
					s[j] = tolower(s[j]);
				}
			}
			count[s]++;
		}
		cout << "List " << list << ":\n";
		for (map<string, int>::iterator i = count.begin(); i != count.end(); i++) {
			cout << i->first << " | " << i->second << '\n';
		}
		cin >> n;
	}
	return 0;
}