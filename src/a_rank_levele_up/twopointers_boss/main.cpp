#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    // とりあえず格納
    vector<vector<int>> v;
    vector<int> tmpv;
    for (long long int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp != 0) {
            tmpv.push_back(tmp);
        } else {
            if (tmpv.size() != 0) {
                v.push_back(tmpv);
                tmpv.clear();
            }
        }
        if (i == n - 1 && tmp != 0) {
            v.push_back(tmpv);
        }
    }

    // 累積和の作成
    vector<vector<long long int>> v2(v.size());
    for (long long int i = 0; i < v.size(); i++) {
        vector<long long int> tmpv2(v[i].size() + 1, 1);
        for (long long int j = 0; j < v[i].size(); j++) {
            tmpv2[j + 1] = tmpv2[j] * v[i][j];
        }
        v2[i] = tmpv2;
    }

    long long int ans = 1e9;
    // 各配列
    for (long long int i = 0; i < v2.size(); i++) {
        bool flg = false;
        if (v2[i][v2[i].size() - 1] < k) {
            continue;
        }
        // 長さ
        for (long long int j = 1; j < v2[i].size(); j++) {
            // スタート位置
            for (long long int l = 0; l < v2[i].size() - j; l++) {
                if ((v2[i][l + j] / v2[i][l]) >= k) {
                    if (ans > j) {
                        ans = j;
                    }
                    flg = true;
                    break;
                }
            }
            if (flg) {
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}