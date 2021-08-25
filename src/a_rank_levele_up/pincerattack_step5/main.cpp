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

    // y方向
    for (int i = -1; i <= 1; i++) {
        int j = 1;
        while (true) {
            int tmpy = y + i * j;
            if (tmpy < 0 || tmpy >= h) {
                break;
            }
            if (v[tmpy][x] == '*') {
                for (int k = 1; k < j; k++) {
                    v[y + i * k][x] = '*';
                }
                break;
            }
            j++;
        }
    }
    // x方向
    for (int i = -1; i <= 1; i++) {
        int j = 1;
        while (true) {
            int tmpx = x + i * j;
            if (tmpx < 0 || tmpx >= w) {
                break;
            }
            if (v[y][tmpx] == '*') {
                for (int k = 1; k < j; k++) {
                    v[y][x + i * k] = '*';
                }
                break;
            }
            j++;
        }
    }
    // y-方向/x-方向, y+方向/x+方向
    for (int i = -1; i <= 1; i++) {
        int j = 1;
        while (true) {
            int tmpy = y + i * j;
            int tmpx = x + i * j;
            if (tmpy < 0 || tmpy >= h || tmpx < 0 || tmpx >= w) {
                break;
            }
            if (v[tmpy][tmpx] == '*') {
                for (int k = 1; k < j; k++) {
                    v[y + i * k][x + i * k] = '*';
                }
                break;
            }
            j++;
        }
    }
    // y-方向/x+方向, y+方向/x-方向
    for (int i = -1; i <= 1; i++) {
        int j = 1;
        while (true) {
            int tmpy = y + i * j;
            int tmpx = x - i * j;
            if (tmpy < 0 || tmpy >= h || tmpx < 0 || tmpx >= w) {
                break;
            }
            if (v[tmpy][tmpx] == '*') {
                for (int k = 1; k < j; k++) {
                    v[y + i * k][x - i * k] = '*';
                }
                break;
            }
            j++;
        }
    }

    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
