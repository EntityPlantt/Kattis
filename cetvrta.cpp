#include <iostream>
using namespace std;
int main() {
    pair <int, int> rect[3];
    for (int i = 0; i < 3; i++) {
        cin >> rect[i].first >> rect[i].second;
    }
    if (rect[0].first == rect[1].first) {
        cout << rect[2].first;
    }
    else if (rect[2].first == rect[1].first) {
        cout << rect[0].first;
    }
    else {
        cout << rect[1].first;
    }
    cout << ' ';
    if (rect[0].second == rect[1].second) {
        cout << rect[2].second;
    }
    else if (rect[2].second == rect[1].second) {
        cout << rect[0].second;
    }
    else {
        cout << rect[1].second;
    }
    return 0;
}