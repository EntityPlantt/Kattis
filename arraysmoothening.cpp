// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <queue>
#include <map>
using namespace std;
int main() {
    int n, k, x;
    cin >> n >> k;
    map <int, int> m;
    priority_queue <int> q;
    for (int i = 0; i < n; i++) {
        cin >> x;
        m[x]++;
    }
    for (auto i = m.begin(); i != m.end(); i++) {
        q.push(i->second);
    }
    for (int i = 0; i < k; i++) {
        x = q.top() - 1;
        q.pop();
        q.push(x);
    }
    cout << q.top();
    return 0;
}