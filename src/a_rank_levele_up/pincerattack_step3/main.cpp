#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, y, x;
    cin >> h >> w >> y >> x;

    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            v[i] += '.';
        }
    }
    v[y][x] = '!';

    // y-&x-, y+&x+
    for (int i = -1; i <= 1; i += 2) {
        int j = 1;
        while (true) {
            int tmpy = y + (i * j);
            int tmpx = x + (i * j);
            if (tmpy < 0 || tmpy >= h || tmpx < 0 || tmpx >= w) {
                break;
            }
            v[tmpy][tmpx] = '*';
            j++;
        }
    }
    // y-&x+, y+&x-
    for (int i = -1; i <= 1; i += 2) {
        int j = 1;
        while (true) {
            int tmpy = y + (i * j);
            int tmpx = x - (i * j);
            if (tmpy < 0 || tmpy >= h || tmpx < 0 || tmpx >= w) {
                break;
            }
            v[tmpy][tmpx] = '*';
            j++;
        }
    }

    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
