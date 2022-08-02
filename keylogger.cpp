// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str = "", sound;
    vector <string> keyboard;
    bool caps = false, shift = false;
    {
        keyboard.push_back("clank");
        keyboard.push_back("bong");
        keyboard.push_back("click");
        keyboard.push_back("tap");
        keyboard.push_back("poing");
        keyboard.push_back("clonk");
        keyboard.push_back("clack");
        keyboard.push_back("ping");
        keyboard.push_back("tip");
        keyboard.push_back("cloing");
        keyboard.push_back("tic");
        keyboard.push_back("cling");
        keyboard.push_back("bing");
        keyboard.push_back("pong");
        keyboard.push_back("clang");
        keyboard.push_back("pang");
        keyboard.push_back("clong");
        keyboard.push_back("tac");
        keyboard.push_back("boing");
        keyboard.push_back("boink");
        keyboard.push_back("cloink");
        keyboard.push_back("rattle");
        keyboard.push_back("clock");
        keyboard.push_back("toc");
        keyboard.push_back("clink");
        keyboard.push_back("tuc");
    } // Defining all keyboard sounds
    while (n--) {
        cin >> sound;
        if (sound == "whack") {
            str += ' ';
        }
        else if (sound == "bump") {
            caps = !caps;
        }
        else if (sound == "dink") {
            shift = true;
        }
        else if (sound == "thumb") {
            shift = false;
        }
        else if (sound == "pop") {
            if (!str.empty()) {
                str.pop_back();
            }
        }
        else {
            str += ((caps ^ shift) ? 'A' : 'a') + distance(keyboard.begin(), find(keyboard.begin(), keyboard.end(), sound));
        }
    }
    cout << str;
    return 0;
}