#include <iostream>
#include <vector>
#include <string>

using namespace std;

void check(char c) {
    if (c != '#') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int h, w, y, x;
    char d, m;
    cin >> h >> w >> y >> x >> d >> m;

    vector<string> v;
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    switch (d) {
        case 'N':
            try {
                if (m == 'R') {
                    check(v[y].at(x + 1));
                } else {
                    check(v[y].at(x - 1));
                }
            } catch(out_of_range const & e) {
                cout << "No" << endl;
            }
            break;
        case 'E':
            try {
                if (m == 'R') {
                    check(v.at(y + 1)[x]);
                } else {
                    check(v.at(y - 1)[x]);
                }
            } catch(out_of_range const & e) {
                cout << "No" << endl;
            }
            break;
        case 'S':
            try {
                if (m == 'R') {
                    check(v[y].at(x - 1));
                } else {
                    check(v[y].at(x + 1));
                }
            } catch(out_of_range const & e) {
                cout << "No" << endl;
            }
            break;
        case 'W':
            try {
                if (m == 'R') {
                    check(v.at(y - 1)[x]);
                } else {
                    check(v.at(y + 1)[x]);
                }
            } catch(out_of_range const & e) {
                cout << "No" << endl;
            }
            break;
    }

    return 0;
}
