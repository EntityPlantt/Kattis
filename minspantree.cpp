// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <tuple>
#include <vector>
#include <queue>
using namespace std;
typedef tuple <size_t, size_t, size_t> edge;
#define v(tup, elm) get<elm>(tup)
size_t INF = -1;
size_t leader(vector <size_t> succL, size_t member) {
    while (succL[member] != INF) {
        member = succL[member];
    }
    return member;
}
struct comp_EdgesWeight {
    bool operator()(edge a, edge b) {
        return v(a, 2) > v(b, 2);
    }
};
struct comp_EdgesAlphabetical {
    bool operator()(edge a, edge b) {
        if (v(a, 0) == v(b, 0)) {
            return v(a, 1) > v(b, 1);
        }
        return v(a, 0) > v(b, 0);
    }
};
int main() {
    int n, m;
    edge e;
    while (true) {
        cin >> n >> m;
        if (!n && !m) {
            break;
        }
        priority_queue <edge, vector <edge>, comp_EdgesWeight> edges;
        priority_queue <edge, vector <edge>, comp_EdgesAlphabetical> used;
        vector <size_t> succ(n, INF), size(n, 1);
        size_t total = 0;
        while (m--) {
            cin >> v(e, 0) >> v(e, 1) >> v(e, 2);
            edges.push(e);
        }
        while (!edges.empty()) {
            size_t l1 = leader(succ, v(edges.top(), 0)), l2 = leader(succ, v(edges.top(), 1));
            if (l1 != l2) {
                if (size[l1] < size[l2]) {
                    size[l2] += size[l1];
                    succ[l1] = l2;
                    if (size[l1] == n) {
                        goto PRINT;
                    }
                }
                else {
                    size[l1] += size[l2];
                    succ[l2] = l1;
                    if (size[l2] == n) {
                        goto PRINT;
                    }
                }
                used.push(edges.top());
                total += v(edges.top(), 2);
            }
            edges.pop();
        }
        cout << "Impossible\n";
        continue;
        PRINT:
        cout << total << '\n';
        while (!used.empty()) {
            cout << v(used.top(), 0) << v(used.top(), 1) << '\n';
        }
    }
    return 0;
}