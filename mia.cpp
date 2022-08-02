#include <bits/stdc++.h>
using namespace std;
int main() {
    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;
    while (p1) {
        p1 = max(p1, p2) * 10 + min(p1, p2);
        p2 = max(p3, p4) * 10 + min(p3, p4);
        if (p1 == p2) {
            cout << "Tie";
        }
        else if (p1 == 21) {
            cout << "Player 1 wins";
        }
        else if (p2 == 21) {
            cout << "Player 2 wins";
        }
        else if (p1 % 11 == 0 && p2 % 11 == 0) {
            if (p1 > p2) {
                cout << "Player 1 wins";
            }
            else {
                cout << "Player 2 wins";
            }
        }
        else if (p1 % 11 == 0) {
            cout << "Player 1 wins";
        }
        else if (p2 % 11 == 0) {
            cout << "Player 2 wins";
        }
        else {
            if (p1 > p2) {
                cout << "Player 1 wins";
            }
            else {
                cout << "Player 2 wins";
            }
        }
        cout << ".\n";
        cin >> p1 >> p2 >> p3 >> p4;
    }
    return 0;
}