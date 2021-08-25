#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, y, x;
    cin >> h >> w >> y >> x;

    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        cin >> v[i];
    }
    v[y][x] = '*';

    // y方向プラス
    for (int i = y + 1; i < h; i++) {
        if (v[i][x] == '*') {
            for (int j = y + 1; j < i; j++) {
                v[j][x] = '*';
            }
            break;
        }
    }
    // y方向マイナス
    for (int i = y - 1; i >= 0; i--) {
        if (v[i][x] == '*') {
            for (int j = y - 1; j > i; j--) {
                v[j][x] = '*';
            }
            break;
        }
    }
    // x方向プラス
    for (int i = x + 1; i < w; i++) {
        if (v[y][i] == '*') {
            for (int j = x + 1; j < i; j++) {
                v[y][j] = '*';
            }
            break;
        }
    }
    // x方向マイナス
    for (int i = x - 1; i >= 0; i--) {
        if (v[y][i] == '*') {
            for (int j = x - 1; j > i; j--) {
                v[y][j] = '*';
            }
            break;
        }
    }

    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
