#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < h; i++) {
        bool flg = false;
        for (int j = 0; j < w; j++) {
            if (v[i][j] == '*') {
                if (i != 0) {
                    v[i - 1][j] = '*';
                }
                if (i != h - 1) {
                    v[i + 1][j] = '*';
                }
                if (j != 0) {
                    v[i][j - 1] = '*';
                }
                if (j != w - 1) {
                    v[i][j + 1] = '*';
                }
                flg = true;
                break;
            }
        }
        if (flg) {
            break;
        }
    }

    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
