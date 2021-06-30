#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m, ans = 0;
    string s;
    vector<int> v(3, 0), as;
    vector<vector<int>> c;

    cin >> n;
    cin >> m;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'G') {
            v[0]++;
        }
        if (s[i] == 'C') {
            v[1]++;
        }
        if (s[i] == 'P') {
            v[2]++;
        }
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (m == (i * 5 + j * 2)) {
                c.push_back({i, (n - i - j), j});
            }
        }
    }

    // cout << "出し手: ";
    // for (int i = 0; i < 3; i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < c.size(); i++) {
    //     cout << "選択肢" << i << ": ";
    //     for (int j = 0; j < 3; j++) {
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < c.size(); i++) {
        int t = 0;
        for (int j = 0; j < 3; j++) {
            if (c[i][j] <= v[j]) {
                t += c[i][j];
            } else {
                t += v[j];
            }
        }
        as.push_back(t);
    }

    for (int i = 0; i < as.size(); i++) {
        if (ans < as[i]) {
            ans = as[i];
        }
    }

    cout << ans << endl;

    return 0;
}
