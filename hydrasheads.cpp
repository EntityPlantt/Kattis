// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int h, t;
    while (true) {
        cin >> h >> t;
        if (h == 0 && t == 0) {
            break;
        }
        if (t == 0) {
            if (h % 2) {
                cout << -1;
            }
            else {
                cout << h / 2;
            }
        }
        else if (h % 2) {
            int moves = 0;
            while (t % 4 != 2) {
                moves++;
                t++;
            }
            moves += t / 2;
            h += t / 2;
            moves += h / 2;
            cout << moves;
        }
        else {
            int moves = 0;
            while (t % 4) {
                moves++;
                t++;
            }
            moves += t / 2;
            h += t / 2;
            moves += h / 2;
            cout << moves;
        }
        cout << '\n';
    }
    return 0;
}