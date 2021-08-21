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

    bool flg1 = true;
    while (flg1) {
        for (int i = 0; i < h; i++) {
            bool flg2 = false;
            for (int j = 0; j < w; j++) {
                if (v[i][j] == '*') {
                    if (i != 0 && v[i - 1][j] != '#' && v[i - 1][j] != '-') {
                        v[i - 1][j] = '*';
                    }
                    if (i != h - 1 && v[i + 1][j] != '#' && v[i + 1][j] != '-') {
                        v[i + 1][j] = '*';
                    }
                    if (j != 0 && v[i][j - 1] != '#' && v[i][j - 1] != '-') {
                        v[i][j - 1] = '*';
                    }
                    if (j != w - 1 && v[i][j + 1] != '#' && v[i][j + 1] != '-') {
                        v[i][j + 1] = '*';
                    }
                    v[i][j] = '-';
                    flg2 = true;
                }
            }
            if (flg2) {
                break;
            }
            if (i == h - 1) {
                flg1 = false;
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (v[i][j] == '-') {
                v[i][j] = '*';
            }
        }
        cout << v[i] << endl;
    }


    return 0;
}
