// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int n, subsTimes = 1, subsPtr = 0;
    string subs;
    cin >> n;
    char x;
    while (n--) {
        cin >> x;
        if (subs.empty()) {
            subs += x;
            continue;
        }
        if (subsPtr == subs.size()) {
            subsPtr = 0;
            subsTimes++;
        }
        if (subs[subsPtr] != x) {
            string temp1;
            for (int i = 0; i < subsTimes; i++) {
                temp1 += subs;
            }
            temp1 += x;
            subsTimes = 1;
            subsPtr = 0;
        }
        subsPtr++;
    }
    cout << subs.size();
}