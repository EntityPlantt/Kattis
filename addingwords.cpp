// GitHub: EntityPlantt/Kattis
// Wrong Answer
#include <iostream>
#include <map>
#include <set>
using namespace std;
int main() {
    string cmd, args, arrI[2001];
    map <string, int> arrS;
    set <string> vars;
    while (cin >> cmd) {
        if (cmd == "def") {
            string var;
            int val;
            cin >> var >> val;
            if (vars.count(var)) {
                arrI[arrS[var] + 1000] = "";
            }
            arrS[var] = val;
            vars.insert(var);
            arrI[val + 1000] = var;
        }
        else if (cmd == "calc") {
            string var, izraz;
            cin >> var;
            izraz = var;
            int result = arrS[var];
            char c = '\0';
            bool doBreak = false, unknown = false;
            while (!doBreak) {
                string s;
                cin >> c;
                switch (c) {
                    case '=':
                    doBreak = true;
                    break;
                    case '+':
                    cin >> s;
                    result += arrS[s];
                    if (!vars.count(s)) {
                        unknown = true;
                    }
                    izraz += " + " + s;
                    break;
                    case '-':
                    cin >> s;
                    result -= arrS[s];
                    if (!vars.count(s)) {
                        unknown = true;
                    }
                    izraz += " - " + s;
                    break;
                }
            }
            if (result < -1000 || result > 1000 || arrI[result + 1000] == "") {
                unknown = true;
            }
            cout << izraz << " = " << (unknown ? "unknown" : arrI[result + 1000]) << '\n';
        }
        else if (cmd == "clear") {
            arrS = map<string, int>();
            for (int i = 0; i < 2001; i++) {
                arrI[i] = "";
            }
            vars = set<string>();
        }
    }
    return 0;
}