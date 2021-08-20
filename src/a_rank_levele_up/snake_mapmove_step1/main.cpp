#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, y, x;
    char m;
    cin >> h >> w >> y >> x >> m;

    vector<string> v;
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    switch (m) {
        case 'N':
            try {
                if (v.at(y - 1)[x] == '.') {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            } catch (out_of_range const & e ) {
                cout << "No" << endl;
            }
            break;
        case 'E':
            try {
                if (v[y].at(x + 1) == '.') {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            } catch (out_of_range const & e ) {
                cout << "No" << endl;
            }
            break;
        case 'S':
            try {
                if (v.at(y + 1)[x] == '.') {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            } catch (out_of_range const & e ) {
                cout << "No" << endl;
            }
            break;
        case 'W':
            try {
                if (v[y].at(x - 1) == '.') {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            } catch (out_of_range const & e ) {
                cout << "No" << endl;
            }
            break;
    }

    return 0;
}