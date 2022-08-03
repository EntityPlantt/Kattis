// GitHub: EntityPlantt/Kattis
// Wrong Answer
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() {
    short n, a, b;
    bool isQu, isSt, isPq;
    while (cin >> n) {
        queue <short> qu;
        stack <short> st;
        priority_queue <short> pq;
        isQu = isSt = isPq = true;
        while (n--) {
            cin >> a >> b;
            switch (a) {
                case 1:
                qu.push(b);
                st.push(b);
                pq.push(b);
                break;
                case 2:
                if (qu.empty()) {
                    isQu = isSt = isPq = false;
                    break;
                }
                if (isQu) {
                    isQu = short(qu.front() == b);
                }
                qu.pop();
                if (isSt) {
                    isSt = short(st.top() == b);
                }
                st.pop();
                if (isPq) {
                    isPq = short(pq.top() == b);
                }
                pq.pop();
                break;
            }
            if (!isQu && !isSt && !isPq) {
                break;
            }
        }
        if (!isQu && !isSt && !isPq) {
            cout << "impossible\n";
        }
        else if (isQu && !isSt && !isPq) {
            cout << "queue\n";
        }
        else if (!isQu && isSt && !isPq) {
            cout << "stack\n";
        }
        else if (!isQu && !isSt && isPq) {
            cout << "priority queue\n";
        }
        else {
            cout << "not sure\n";
        }
    }
    return 0;
}