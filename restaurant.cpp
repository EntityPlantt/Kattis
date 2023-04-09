// GitHub: EntityPlantt/Kattis
// Not Working
#include <iostream>
using namespace std;
int main() {
    int n, arg, plates;
    string cmd;
    bool reversed;
    cin >> n;
    while (n) {
        reversed = false;
        plates = 0;
        while (n--) {
            cin >> cmd >> arg;
            if (cmd == "DROP") {
                if (reversed) {
                    cout << "MOVE 1->2 " << plates << '\n';
                    reversed = false;
                }
                cout << "DROP 2 " << arg << '\n';
                plates += arg;
            }
            else {
                if (!reversed) {
                    cout << "MOVE 2->1 " << plates << '\n';
                    reversed = true;
                }
                cout << "TAKE 1 " << arg << '\n';
                plates -= arg;
            }
        }
        cout << '\n';
        cin >> n;
    }
    return 0;
}