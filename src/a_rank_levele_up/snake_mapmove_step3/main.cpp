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
        char d;
        cin >> d;
        try {
            switch (D % 4) {
                case 0:
                    if (d == 'R') {
                        if (v[y].at(x + 1) != '#') {
                            x++;
                        } else {
                            throw exception();
                        }
                    } else {
                        if (v[y].at(x - 1) != '#') {
                            x--;
                        } else {
                            throw exception();
                        }
                    }
                    break;
                case 1:
                    if (d == 'R') {
                        if (v.at(y + 1)[x] != '#') {
                            y++;
                        } else {
                            throw exception();
                        }
                    } else {
                        if (v.at(y - 1)[x] != '#') {
                            y--;
                        } else {
                            throw exception();
                        }
                    }
                    break;
                case 2:
                    if (d == 'R') {
                        if (v[y].at(x - 1) != '#') {
                            x--;
                        } else {
                            throw exception();
                        }
                    } else {
                        if (v[y].at(x + 1) != '#') {
                            x++;
                        } else {
                            throw exception();
                        }
                    }
                    break;
                case 3:
                    if (d == 'R') {
                        if (v.at(y - 1)[x] != '#') {
                            y--;
                        } else {
                            throw exception();
                        }
                    } else {
                        if (v.at(y + 1)[x] != '#') {
                            y++;
                        } else {
                            throw exception();
                        }
                    }
                    break;
            }
        } catch (exception const & e) {
            cout << "Stop" << endl;
            break;
        }
        cout << y << " " << x << endl;
        if (d == 'R') {
            D++;
        } else {
            D--;
        }
    }

    return 0;
}