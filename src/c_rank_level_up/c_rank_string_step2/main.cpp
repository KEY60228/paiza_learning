#include <iostream>
#include <string>

using namespace std;

int main() {
    char c;
    string s;
    bool b = false;

    cin >> c;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            b = true;
            break;
        }
    }

    if (b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
