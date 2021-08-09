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

    // 横のチェック
    for (int i = 0; i < 5; i++) {
        if (v[i] == "OOOOO") {
            cout << 'O' << endl;
            return 0;
        }
        if (v[i] == "XXXXX") {
            cout << 'X' << endl;
            return 0;
        }
    }

    // 縦のチェック
    for (int i = 0; i < 5; i++) {
        int x = 0, o = 0;
        for (int j = 0; j < 5; j++) {
            if (v[j][i] == 'X') {
                x++;
            }
            if (v[j][i] == 'O') {
                o++;
            }
        }
        if (o == 5) {
            cout << 'O' << endl;
            return 0;
        }
        if (x == 5) {
            cout << 'X' << endl;
            return 0;
        }
    }

    // 斜めのチェック
    int x = 0, o = 0;
    for (int i = 0; i < 5; i++) {
        if (v[i][i] == 'O') {
            o++;
        }
        if (v[i][i] == 'X') {
            x++;
        }
    }
    if (o == 5) {
        cout << 'O' << endl;
        return 0;
    }
    if (x == 5) {
        cout << 'X' << endl;
        return 0;
    }

    x = 0, o = 0;
    for (int i = 0; i < 5; i++) {
        if (v[i][4 - i] == 'O') {
            o++;
        }
        if (v[i][4 - i] == 'X') {
            x++;
        }
    }
    if (o == 5) {
        cout << 'O' << endl;
        return 0;
    }
    if (x == 5) {
        cout << 'X' << endl;
        return 0;
    }

    cout << 'D' << endl;

    return 0;
}