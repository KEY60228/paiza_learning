#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        cin >> v[i];
    }

    for (int l = 0; l < n * 2; l++) {
        int x, y;
        cin >> y >> x;

        char AB;
        if (l % 2 == 0) {
            AB = 'A';
        } else {
            AB = 'B';
        }

        v[y][x] = AB;
        // y方向
        for (int i = -1; i <= 1; i++) {
            int j = 1;
            while (true) {
                int tmpy = y + i * j;
                if (tmpy < 0 || tmpy >= h) {
                    break;
                }
                if (v[tmpy][x] == '#') {
                    break;
                }
                if (v[tmpy][x] == AB) {
                    for (int k = 1; k < j; k++) {
                        v[y + i * k][x] = AB;
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
                if (v[y][tmpx] == '#') {
                    break;
                }
                if (v[y][tmpx] == AB) {
                    for (int k = 1; k < j; k++) {
                        v[y][x + i * k] = AB;
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
                if (v[tmpy][tmpx] == '#') {
                    break;
                }
                if (v[tmpy][tmpx] == AB) {
                    for (int k = 1; k < j; k++) {
                        v[y + i * k][x + i * k] = AB;
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
                if (v[tmpy][tmpx] == '#') {
                    break;
                }
                if (v[tmpy][tmpx] == AB) {
                    for (int k = 1; k < j; k++) {
                        v[y + i * k][x - i * k] = AB;
                    }
                    break;
                }
                j++;
            }
        }
    }

    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
