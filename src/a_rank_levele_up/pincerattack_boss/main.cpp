#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, N, n;
    cin >> h >> w >> N >> n;

    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        cin >> v[i];
    }

    for (int l = 0; l < n; l++) {
        int x, y, a;
        cin >> a >> y >> x;

        char p = a + '0';

        v[y][x] = p;
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
                if (v[tmpy][x] == p) {
                    for (int k = 1; k < j; k++) {
                        v[y + i * k][x] = p;
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
                if (v[y][tmpx] == p) {
                    for (int k = 1; k < j; k++) {
                        v[y][x + i * k] = p;
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
                if (v[tmpy][tmpx] == p) {
                    for (int k = 1; k < j; k++) {
                        v[y + i * k][x + i * k] = p;
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
                if (v[tmpy][tmpx] == p) {
                    for (int k = 1; k < j; k++) {
                        v[y + i * k][x - i * k] = p;
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
