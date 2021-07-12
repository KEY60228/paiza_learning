#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    bool flg = true;
    for (int i = 0; i < s.length(); i++) {
        if (flg && s[i] == '0') {
            flg = false;
            continue;
        }
        if (s[i] == ':') {
            cout << endl;
            flg = true;
            continue;
        }
        cout << s[i];
        flg = false;
    }
    cout << endl;

    return 0;
}