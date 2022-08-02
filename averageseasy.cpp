#include <iostream>
using namespace std;
typedef long double ldbl;
int main() {
    int n, a, b, sum;
    ldbl aAverage, bAverage;
    cin >> n;
    while (n--) {
        sum = 0;
        aAverage = 0;
        bAverage = 0;
        cin >> a >> b;
        int A[a], B[b];
        for (int i = 0; i < a; i++) {
            cin >> A[i];
            aAverage += A[i];
        }
        for (int i = 0; i < b; i++) {
            cin >> B[i];
            bAverage += B[i];
        }
        aAverage /= ldbl(a);
        bAverage /= ldbl(b);
        for (int i = 0; i < a; i++) {
            sum += A[i] < aAverage && A[i] > bAverage;
        }
        cout << sum << '\n';
    }
    return 0;
}