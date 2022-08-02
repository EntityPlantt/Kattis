#include <iostream>
#include <vector>
using namespace std;
int main() {
    size_t sprobs = 0, penalty = 0;
    vector <size_t> submissions(26, 0);
    vector <bool> solved(26, false);
    while (true) {
        size_t now_min;
        char now_prob;
        string now_solved;
        cin >> now_min;
        if (now_min == -1) {
            break;
        }
        cin >> now_prob >> now_solved;
        if (solved[now_prob - 'A']) {
            continue;
        }
        if (now_solved == "right") {
            penalty += now_min + submissions[now_prob - 'A'] * 20;
            solved[now_prob - 'A'] = true;
            sprobs++;
        }
        else {
            submissions[now_prob - 'A']++;
        }
    }
    cout << sprobs << ' ' << penalty;
    return 0;
}