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
    for (int i = 0; i < 5; i++) {
        if (v[0][i] != '.') {
            flg = v[0][i];
        } else {
            continue;
        }
        for (int j = 0; j < 5; j++) {
            if (v[j][i] != flg) {
                flg = 'D';
                break;
            }
        }
        if (flg == 'O' || flg == 'X') {
            break;
        }
    }

    cout << flg << endl;

    return 0;
}