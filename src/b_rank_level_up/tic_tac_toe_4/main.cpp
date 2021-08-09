#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> v;
    for (int i = 0; i < 5; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    char flg;
    int x = 0;
    int o = 0;
    for (int i = 0; i < 5; i++) {
        if (v[i][i] == 'X') {
            x++;
        }
        if (v[i][i] == 'O') {
            o++;
        }
    }
    if (x == 5) {
        cout << 'X' << endl;
        return 0;
    }
    if (o == 5) {
        cout << 'O' << endl;
        return 0;
    }

    x = 0;
    o = 0;
    for (int i = 0; i < 5; i++) {
        if (v[i][4 - i] == 'X') {
            x++;
        }
        if (v[i][4 - i] == 'O') {
            o++;
        }
    }
    if (x == 5) {
        cout << 'X' << endl;
        return 0;
    }
    if (o == 5) {
        cout << 'O' << endl;
        return 0;
    }

    cout << 'D' << endl;

    return 0;
}