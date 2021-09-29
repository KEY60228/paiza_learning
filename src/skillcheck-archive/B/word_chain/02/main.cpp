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

    vector<bool> lv(n, true);
    vector<string> uv;
    string bs = "";
    int sp = 0;
    for (int i = 0; i < m; i++) {
        while (!lv[sp]) {
            sp = (sp + 1) % n;
        }

        string tmp;
        cin >> tmp;
        if (
            find(wv.begin(), wv.end(), tmp) == wv.end() ||
            find(uv.begin(), uv.end(), tmp) != uv.end() ||
            tmp[tmp.length() - 1] == 'z' ||
            (bs.length() != 0 && bs[bs.length() - 1] != tmp[0])
        ) {
            lv[sp] = false;
            bs = "";
            sp = (sp + 1) % n;
            continue;
        }
        bs = tmp;
        uv.push_back(tmp);
        sp = (sp + 1) % n;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (lv[i]) {
            ans++;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++) {
        if (lv[i]) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}