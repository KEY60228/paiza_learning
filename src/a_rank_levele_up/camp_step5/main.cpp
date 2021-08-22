#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<vector<pair<char, int>>> v(h);
    for (int i = 0; i < h; i++) {
        vector<pair<char, int>> tmpv(w);
        for (int j = 0; j < w; j++) {
            int b = 0;
            char c;
            cin >> c;
            tmpv[j] = {c, b};
        }
        v[i] = tmpv;
    }

    vector<int> vi(n);
    for (int i = 0; i < n; i++) {
        cin >> vi[i];
    }

    int count = 0;
    while (true) {
        bool flg = false;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if ((v[i][j].first == '*' || v[i][j].first == '?') && v[i][j].second == count) {
                    int tmp = count + 1;
                    if (count == 0 && find(vi.begin(), vi.end(), count) != vi.end()) {
                        v[i][j] = {'?', count};
                    }
                    if (i != 0 && v[i - 1][j].first == '.') {
                        if (find(vi.begin(), vi.end(), tmp) != vi.end()) {
                            v[i - 1][j] = {'?', tmp};
                        } else {
                            v[i - 1][j] = {'*', tmp};
                        }
                    }
                    if (i != h - 1 && v[i + 1][j].first == '.') {
                        if (find(vi.begin(), vi.end(), tmp) != vi.end()) {
                            v[i + 1][j] = {'?', tmp};
                        } else {
                            v[i + 1][j] = {'*', tmp};
                        }
                    }
                    if (j != 0 && v[i][j - 1].first == '.') {
                        if (find(vi.begin(), vi.end(), tmp) != vi.end()) {
                            v[i][j - 1] = {'?', tmp};
                        } else {
                            v[i][j - 1] = {'*', tmp};
                        }
                    }
                    if (j != w - 1 && v[i][j + 1].first == '.') {
                        if (find(vi.begin(), vi.end(), tmp) != vi.end()) {
                            v[i][j + 1] = {'?', tmp};
                        } else {
                            v[i][j + 1] = {'*', tmp};
                        }
                    }
                    flg = true;
                }
            }
        }
        if (!flg) {
            break;
        }
        count++;
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << v[i][j].first;
        }
        cout << endl;
    }

    return 0;
}
