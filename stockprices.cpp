// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <queue>
#include <functional>
using namespace std;
typedef pair <int, int> pii;
int main() {
    int t, n, stocks, price, lastExch;
    string s;
    cin >> t;
    while (t--) {
        priority_queue <pii> bids;
        priority_queue <pii, vector <pii>, greater <pii>> asks;
        cin >> n;
        lastExch = -1;
        while (n--) {
            cin >> s >> stocks;
            if (s == "buy") {
                cin >> s >> s >> price;
                bids.push({price, stocks});
            }
            else {
                cin >> s >> s >> price;
                asks.push({price, stocks});
            }
            while (bids.size() && asks.size() && bids.top().first >= asks.top().first) {
                lastExch = asks.top().first;
                if (bids.top().second < asks.top().second) {
                    pii x = asks.top();
                    x.second -= bids.top().second;
                    asks.pop();
                    asks.push(x);
                    bids.pop();
                }
                else if (bids.top().second > asks.top().second) {
                    pii x = bids.top();
                    x.second -= asks.top().second;
                    bids.pop();
                    bids.push(x);
                    asks.pop();
                }
                else {
                    bids.pop();
                    asks.pop();
                }
            }
            if (asks.size()) cout << asks.top().first; else cout << '-';
            cout << ' ';
            if (bids.size()) cout << bids.top().first; else cout << '-';
            cout << ' ';
            if (lastExch < 0) cout << '-'; else cout << lastExch;
            cout << '\n';
        }
    }
}