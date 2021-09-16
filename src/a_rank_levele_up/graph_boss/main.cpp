#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // if (n - 1 > m) {
    //     cout << "NO" << endl;
    //     return 0;
    // }

    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }

    vector<int> seq;
    seq.push_back(1);
    int itr = 0;
    while (true) {
        bool flg = true;
        for (int i = 0; i < m; i++) {
            if (v[i].first == seq[itr]) {
                flg = false;
                if (find(seq.begin(), seq.end(), v[i].second) == seq.end()) {
                    seq.push_back(v[i].second);
                }
            }
            if (v[i].second == seq[itr]) {
                flg = false;
                if (find(seq.begin(), seq.end(), v[i].first) == seq.end()) {
                    seq.push_back(v[i].first);
                }
            }
        }
        if (flg) {
            break;
        }
        itr++;
    }

    if (seq.size() == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
