// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
using namespace std;
main() {
    int score[5] = {0, 0, 0, 0, 0}, i, j, x;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            cin >> x;
            score[i] += x;
        }
    }
    cout << distance(score - 1, max_element(score, score + 5)) << ' ' << *max_element(score, score + 5);
    return 0;
}