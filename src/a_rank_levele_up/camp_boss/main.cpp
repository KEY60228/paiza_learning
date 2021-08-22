#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <string>

using namespace std;

int main() {
    int h, w;
    char n;
    cin >> h >> w >> n;

    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        cin >> v[i];
    }

    queue<tuple<int, int, int>> qA, qB;
    int count;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (v[i][j] == 'A') {
                if (n == 'A') {
                    qA.emplace(i, j, count);
                } else {
                    qA.emplace(i, j, count + 1);
                }
            }
            if (v[i][j] == 'B') {
                if (n == 'B') {
                    qB.emplace(i, j, count);
                } else {
                    qB.emplace(i, j, count + 1);
                }
            }
        }
    }

    int cA = 0, cB = 0;
    while (!qA.empty() || !qB.empty()) {
        int x, y, c;
        if (n == 'A') {
            y = get<0>(qA.front());
            x = get<1>(qA.front());
            c = get<2>(qA.front());
            if (c != count) {
                count++;
                n = 'B';
                continue;
            }
            qA.pop();
            cA++;
        } else {
            y = get<0>(qB.front());
            x = get<1>(qB.front());
            c = get<2>(qB.front());
            if (c != count) {
                count++;
                n = 'A';
                continue;
            }
            qB.pop();
            cB++;
        }

        for (int i = -1; i <= 1; i += 2) {
            if (y + i >= 0 && y + i < h && v[y + i][x] == '.') {
                if (n == 'A') {
                    v[y + i][x] = 'A';
                    qA.emplace(y + i, x, count + 2);
                } else {
                    v[y + i][x] = 'B';
                    qB.emplace(y + i, x, count + 2);
                }
            }
            if (x + i >= 0 && x + i < w && v[y][x + i] == '.') {
                if (n == 'A') {
                    v[y][x + i] = 'A';
                    qA.emplace(y, x + i, count + 2);
                } else {
                    v[y][x + i] = 'B';
                    qB.emplace(y, x + i, count + 2);
                }
            }
        }
    }

    cout << cA << " " << cB << endl;
    if (cA > cB) {
        cout << 'A' << endl;
    } else {
        cout << 'B' << endl;
    }

    return 0;
}