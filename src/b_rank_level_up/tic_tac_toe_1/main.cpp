#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    char flg = 'D';
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'O') {
            if (find(s.begin(), s.end(), 'X') == s.end() && find(s.begin(), s.end(), '.') == s.end()) {
                flg = 'O';
            }
        }
        if (s[i] == 'X') {
            if (find(s.begin(), s.end(), 'O') == s.end() && find(s.begin(), s.end(), '.') == s.end()) {
                flg = 'X';
            }
        }
    }

    cout << flg << endl;

    return 0;
}