// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	vector <int> prob(a + b - 1, 0);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			prob[i + j]++;
		}
	}
	int max = prob[prob.size() / 2];
	for (int i = 0; i < a + b - 1; i++) {
		if (prob[i] == max) {
			cout << i + 2 << '\n';
		}
	}
	return 0;
}