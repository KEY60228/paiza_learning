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

    int D = 100;
    for (int i = 0; i < n; i++) {
        char c;
        int k;
        cin >> c >> k;

        try {
            switch (D % 4) {
                case 0:
                    if (c == 'R') {
                        for (int j = 1; j <= k; j++) {
                            x++;
                            if (v[y].at(x) == '#') {
                                throw exception();
                            }
                            if (j == k) {
                                D++;
                            }
                        }
                    } else {
                        for (int j = 1; j <= k; j++) {
                            x--;
                            if (v[y].at(x) == '#') {
                                throw exception();
                            }
                            if (j == k) {
                                D--;
                            }
                        }
                    }
                    break;
                case 1:
                    if (c == 'R') {
                        for (int j = 1; j <= k; j++) {
                            y++;
                            if (v.at(y)[x] == '#') {
                                throw exception();
                            }
                            if (j == k) {
                                D++;
                            }
                        }
                    } else {
                        for (int j = 1; j <= k; j++) {
                            y--;
                            if (v.at(y)[x] == '#') {
                                throw exception();
                            }
                            if (j == k) {
                                D--;
                            }
                        }
                    }
                    break;
                case 2:
                    if (c == 'R') {
                        for (int j = 1; j <= k; j++) {
                            x--;
                            if (v[y].at(x) == '#') {
                                throw exception();
                            }
                            if (j == k) {
                                D++;
                            }
                        }
                    } else {
                        for (int j = 1; j <= k; j++) {
                            x++;
                            if (v[y].at(x) == '#') {
                                throw exception();
                            }
                            if (j == k) {
                                D--;
                            }
                        }
                    }
                    break;
                case 3:
                    if (c == 'R') {
                        for (int j = 1; j <= k; j++) {
                            y--;
                            if (v.at(y)[x] == '#') {
                                throw exception();
                            }
                            if (j == k) {
                                D++;
                            }
                        }
                    } else {
                        for (int j = 1; j <= k; j++) {
                            y++;
                            if (v.at(y)[x] == '#') {
                                throw exception();
                            }
                            if (j == k) {
                                D--;
                            }
                        }
                    }
                    break;
            }
        } catch (exception const & e) {
            if (c == 'R') {
                switch (D % 4) {
                    case 0:
                        x--;
                        break;
                    case 1:
                        y--;
                        break;
                    case 2:
                        x++;
                        break;
                    case 3:
                        y++;
                        break;
                }
            } else {
                switch (D % 4) {
                    case 0:
                        x++;
                        break;
                    case 1:
                        y++;
                        break;
                    case 2:
                        x--;
                        break;
                    case 3:
                        y--;
                        break;
                }
            }
            cout << y << " " << x << endl;
            cout << "Stop" << endl;
            break;
        }
        cout << y << " " << x << endl;
    }

    return 0;
}