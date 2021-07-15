#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string t;
        int h, m;
        cin >> t >> h >> m;

        int H = stoi(t.substr(0, 2)) + h;
        int M = stoi(t.substr(3, 2)) + m;

        if (M >= 60) {
            M -= 60;
            H += 1;
        }
        if (H >= 24) {
            H -= 24;
        }

        string sh = to_string(H);
        string sm = to_string(M);

        if (sh.length() == 1) {
            sh = '0' + sh;
        }
        if (sm.length() == 1) {
            sm = '0' + sm;
        }

        cout << sh << ":" << sm << endl;
    }

    return 0;
}
