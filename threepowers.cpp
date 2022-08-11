// GitHub: EntityPlantt/Kattis
// Should work, but it isn't working
#include <iostream>
using namespace std;
string pow3[32] = {
    "1", "3", "9", "27", "81", "243", "729", "2187", "6561",
    "19683", "59049", "177147", "531441", "1594323", "4782969",
    "14348907", "43046721", "129140163", "387420489", "1162261467",
    "3486784401", "10460353203", "31381059609", "94143178827",
    "282429536481", "847288609443", "2541865828329", "7625597484987",
    "22876792454961", "68630377364883", "205891132094649", "617673396283947"
};
int main() {
    unsigned long long k;
    while (true) {
        cin >> k;
        if (!k--) break;
        string out;
        for (int i = 0; i < 32; i++) {
            if (k & (1 << i)) {
                if (out.empty()) {
                    out += '{';
                }
                else {
                    out += ',';
                }
                out += ' ' + pow3[i];
            }
        }
        if (out.empty()) {
            out = '{';
        }
        out += " }";
        cout << out << '\n';
    }
}