#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, y, x, n;
    cin >> h >> w >> y >> x >> n;

    vector<string> v;
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    v[y][x] = '*';

    int D = 100;
    for (int i = 0; i < n; i++) {
        char d;
        int m;
        cin >> d >> m;

        int xy, c;
        if (d == 'R') {
            xy = 1;
            c = 1;
        } else {
            xy = -1;
            c = -1;
        }

        try {
            switch (D % 4) {
                case 0:
                    for (int j = 0; j < m; j++) {
                        x += xy;
                        if (v[y].at(x) != '#') {
                            v[y][x] = '*';
                        } else {
                            throw exception();
                        }
                    }
                    break;
                case 1:
                    for (int j = 0; j < m; j++) {
                        y += xy;
                        if (v.at(y)[x] != '#') {
                            v[y][x] = '*';
                        } else {
                            throw exception();
                        }
                    }
                    break;
                case 2:
                    for (int j = 0; j < m; j++) {
                        x -= xy;
                        if (v[y].at(x) != '#') {
                            v[y][x] = '*';
                        } else {
                            throw exception();
                        }
                    }
                    break;
                case 3:
                    for (int j = 0; j < m; j++) {
                        y -= xy;
                        if (v.at(y)[x] != '#') {
                            v[y][x] = '*';
                        } else {
                            throw exception();
                        }
                    }
                    break;
            }
        } catch (exception const & e) {
            break;
        }

        D += c;
    }

    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
