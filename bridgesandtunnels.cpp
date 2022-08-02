#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, newGr = 0;
    cin >> n;
    vector <pair <string, bool>> build;
    while (n--) {
        string a, b;
        cin >> a >> b;
        auto A = find_if(build.begin(), build.end(), [&](pair <string, bool> arg) {
            return arg.first == a;
        }),
        B = find_if(build.begin(), build.end(), [&](pair <string, bool> arg) {
            return arg.first == b;
        });
        if (A == build.end()) {
            build.push_back({a, newGr++});
            A = build.end() - 1;
        }
        if (B == build.end()) {
            build.push_back({b, newGr++});
            B = build.end() - 1;
        }
    }
    return 0;
}