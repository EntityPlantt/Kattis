#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    short** m;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        m = new short*[n];
        for (int i = 0; i < n; i++) {
            m[i] = new short[n];
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            vector <int> vertices;
            for (int j = 0; j < n; j++) {
                if (m[i][j]) {
                    vertices.push_back(j);
                }
            }
            if (vertices.size() < 2) {
                cout << i << ' ';
                continue;
            }
            bool triangle = false;
            for (int j = 0; j < vertices.size() - 1; j++) {
                if (triangle) {
                    break;
                }
                for (int k = j + 1; k < vertices.size(); k++) {
                    if (m[vertices[j]][vertices[k]]) {
                        triangle = true;
                        break;
                    }
                }
            }
            if (!triangle) {
                cout << i << ' ';
            }
        }
        for (int i = 0; i < n; i++) {
            delete m[i];
        }
        delete m;
        cout << '\n';
    }
    return 0;
}