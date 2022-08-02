// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <map>
#include <set>
using namespace std;
int main() {
    string cmd;
    map <string, int> integers;
    set <string> definedIntegers;
    while (cin >> cmd) {
        if (cmd == "define") {
            int value;
            string name;
            cin >> value >> name;
            integers[name] = value;
            definedIntegers.insert(name);
        }
        else if (cmd == "eval") {
            string var1, var2;
            char oper;
            cin >> var1 >> oper >> var2;
            if (!definedIntegers.count(var1) || !definedIntegers.count(var2)) {
                cout << "undefined\n";
                continue;
            }
            bool answer;
            switch (oper) {
                case '<':
                answer = integers[var1] < integers[var2];
                break;
                case '=':
                answer = integers[var1] == integers[var2];
                break;
                case '>':
                answer = integers[var1] > integers[var2];
                break;
            }
            if (answer) {
                cout << "true\n";
            }
            else {
                cout << "false\n";
            }
        }
        else {
            break;
        }
    }
    return 0;
}