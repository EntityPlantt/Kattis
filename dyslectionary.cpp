// GitHub: EntityPlantt/Kattis
#include <bits/stdc++.h>
using namespace std;
bool less_StringReversed(string a, string b) {
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	return a < b;
}
bool less_StringSize(string a, string b) {
	return a.size() < b.size();
}
int main() {
	vector <string> group;
	string s;
	bool terminatable = false;
	while (getline(cin, s)) {
		if (s == "") {
			sort(group.begin(), group.end(), less_StringReversed);
			int maxSize = max_element(group.begin(), group.end(), less_StringSize)->size();
			while (!group.empty()) {
				while (group[0].size() < maxSize)
					group[0] = ' ' + group[0];
				cout << group[0] << endl;
				group.erase(group.begin());
			}
			cout << endl;
			if (terminatable)
				return 0;
		}
		else {
			group.push_back(s);
		}
		terminatable = s == "";
	}
}