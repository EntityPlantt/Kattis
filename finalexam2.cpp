// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    char c = ' ', c2;
    while (n--) {
        cin >> c2;
        sum += c == c2;
        c = c2;
    }
    cout << sum;
}