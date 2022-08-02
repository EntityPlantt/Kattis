// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int outputs[21] = {
        3, 5, 8, 12, 20,
        34, 57, 98, 170,
        300, 536, 966,
        1754, 3210, 5910,
        10944, 20366, 38064,
        71421, 134480, 254016
    }, year;
    while (true) {
        cin >> year;
        if (!year) {
            return 0;
        }
        cout << outputs[year / 10 - 196] << '\n';
    }
}