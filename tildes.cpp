#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector <int> gr(n);
    for (int i = 0; i < n; i++) {
        gr[i] = i;
    }
    while (q--) {
        char x;
        cin >> x;
        if (x == 't') {
            int a, b, g;
            cin >> a >> b;
            a--;
            g = gr[--b];
            for (int i = 0; i < n; i++) {
                if (gr[i] == g) {
                    gr[i] = gr[a];
                }
            }
        }
        else {
            int a;
            cin >> a;
            cout << count(gr.begin(), gr.end(), gr[--a]) << '\n';
        }
    }
    return 0;
}