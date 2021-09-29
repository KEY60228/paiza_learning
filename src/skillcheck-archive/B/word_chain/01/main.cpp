#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;

    vector<string> wv(k);
    for (int i = 0; i < k; i++) {
        cin >> wv[i];
    }

    vector<pair<int, bool>> lv(n);
    for (int i = 0; i < n; i++) {
        lv[i] = {i + 1, true};
    }

    string bs = "";
    vector<string> uv;
    int li = n;
    int hi = 0;
    bool flg = true;
    for (int i = 0; i < m; i++) {
        int sp;
        int t = i;
        while (true) {
            if (lv[(t - hi) % li].second) {
                sp = lv[(t - hi) % li].first;
                break;
            } else {
                t++;
            }
        }

        string tmp;
        cin >> tmp;
        if (
            find(wv.begin(), wv.end(), tmp) == wv.end() ||
            find(uv.begin(), uv.end(), tmp) != uv.end() ||
            tmp[tmp.length() - 1] == 'z' ||
            (bs.length() != 0 && bs[bs.length() - 1] != tmp[0])
        ) {
            lv[sp - 1].second = false;
            bs = "";
            li = 0;
            for (int j = 0; j < n; j++) {
                if (lv[j].second) {
                    li++;
                }
            }
            hi = i;
            continue;
        }
        bs = tmp;
        uv.push_back(tmp);
        li = 0;
        for (int j = 0; j < n; j++) {
            if (lv[j].second) {
                li++;
            }
        }
        hi = i;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (lv[i].second) {
            ans++;
        }
    }

    cout << ans << endl;
    for (int i = 0; i < n; i++) {
        if (lv[i].second) {
            cout << lv[i].first << endl;
        }
    }

    return 0;
}
