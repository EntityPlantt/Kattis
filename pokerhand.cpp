// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    char a, b;
    string corr = "A23456789TJQK";
    int arr[corr.size()];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < 5; i++) {
        cin >> a >> b;
        arr[distance(corr.begin(), find(corr.begin(), corr.end(), a))]++;
    }
    cout << *max_element(arr, arr + corr.size());
    return 0;
}