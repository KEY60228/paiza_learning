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
    int p = 0;
    while (flg1) {
        bool flg2 = false;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (v[i][j] == '*' || v[i][j] == p + '0') {
                    if (i != 0 && v[i - 1][j] == '.') {
                        v[i - 1][j] = p + '1';
                    }
                    if (i != h - 1 && v[i + 1][j] == '.') {
                        v[i + 1][j] = p + '1';
                    }
                    if (j != 0 && v[i][j - 1] == '.') {
                        v[i][j - 1] = p + '1';
                    }
                    if (j != w - 1 && v[i][j + 1] == '.') {
                        v[i][j + 1] = p + '1';
                    }
                    v[i][j] = p + '0';
                    flg2 = true;
                }
            }
        }
        p++;
        if (!flg2) {
            flg1 = false;
        }
    }

    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }


    return 0;
}
