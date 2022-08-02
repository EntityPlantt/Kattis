#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    bool hasIn[n];
    memset(hasIn, false, sizeof(hasIn));
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        hasIn[x - 1] = true;
    }
    if (find(hasIn, hasIn + n, false) == hasIn + n) {
        cout << "too late";
    }
    else {
        cout << distance(hasIn, find(hasIn, hasIn + n, false)) + 1;
    }
    return 0;
}