#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    vector <bool> arr;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x % 2);
        while (arr.size() > 1 && arr.back() == *(arr.end() - 2)) {
            arr.erase(arr.end() - 2, arr.end());
        }
    }
    cout << arr.size();
}