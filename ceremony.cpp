#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    size_t n, cnt = 0, notVisited;
    cin >> n;
    notVisited = n;
    vector <bool> visited(n, false);
    vector <size_t> blocks(n);
    for (size_t &x : blocks) {
        cin >> x;
    }
    while (notVisited) {
        vector<size_t>::iterator maxElm = find(visited.begin(), visited.end(), false);
        for (auto i = maxElm; i != visited.end(); i++) {
            if (*i && *(i - visited.begin() + blocks.begin()) > *(maxElm - visited.begin() + blocks.begin())) {
                maxElm = i;
            }
        }
        if (blocks.size() > *maxElm) {
            for (size_t i = 0; i < blocks.size(); i++) {
                if (--blocks[i] <= 0) {
                    blocks.erase(blocks.begin() + i--);
                }
            }
        }
        else {
            blocks.erase(maxElm);
        }
        cnt++;
    }
    cout << cnt;
}