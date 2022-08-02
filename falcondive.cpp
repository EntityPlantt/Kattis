// GitHub: EntityPlantt/Kattis
#include <iostream>
using namespace std;
int main() {
    int m, n, i, j, fcX, fcY, fc2X, fc2Y, a, b;
    char c, _;
    cin >> m >> n >> _ >> c >> _;
    char img1[m][n], img2[m][n];
    bool falcon[m][n], haveFirstCoord = false;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> img1[i][j];
            falcon[i][j] = img1[i][j] == c;
            if (falcon[i][j] && !haveFirstCoord) {
                haveFirstCoord = true;
                fcX = i;
                fcY = j;
            }
        }
    }
    haveFirstCoord = false;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> img2[i][j];
            if (img2[i][j] == c && !haveFirstCoord) {
                haveFirstCoord = true;
                fc2X = i;
                fc2Y = j;
            }
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            a = i - fc2X * 2 - fcX;
            b = j - fc2Y * 2 - fcY;
            if (a && a < m
             && b && b < n
             && falcon[a][b]) {
                cout << c;
            }
            else if (img1[i][j] != c) {
                cout << img1[i][j];
            }
            else {
                cout << img2[i][j];
            }
        }
        cout << '\n';
    }
}