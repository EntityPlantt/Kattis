// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int lower = 0, upper, i = 1;
    cin >> upper;
    upper *= 2;
    string input;
    for (; input != "exact"; i++) {
        cout << (upper + lower) / 2 * i << endl;
        cin >> input;
        if (input == "less") {
            upper = (upper + lower) / 2 - 1;
        }
        else {
            lower = (upper + lower) / 2 + 1;
        }
    }
    return 0;
}