#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double cost, sum = 0;
	int lawns;
	cin >> cost >> lawns;
	for (int i = 0; i < lawns; i++) {
		double w, h;
		cin >> w >> h;
		sum += w * h;
	}
	cout << fixed << setprecision(7) << sum * cost;
	return 0;
}