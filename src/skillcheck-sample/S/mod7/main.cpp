#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        long tmp;
        cin >> tmp;
        // v.push_back(tmp);
        // 余剰値で考える
        v.push_back(tmp % 7);
    }

    // 三重ループは実行時間オーバー
    // int ans = 0;
    // for (int i = 0; i < n - 2; i++) {
    //     for (int j = 1; j < n - 1; j++) {
    //         if (i >= j) {
    //             continue;
    //         }
    //         for (int k = 2; k < n; k++) {
    //             if (j >= k) {
    //                 continue;
    //             }
    //             if (((v[i] + v[j] + v[k]) % 7) == 0) {
    //                 ans++;
    //             }
    //         }
    //     }
    // }

    // 余剰値で考える
    int ans = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = i; j < 7; j++) {
            for (int k = j; k < 7; k++) {
                if ((i + j + k) % 7 == 0) {
                    int c1 = count(v.begin(), v.end(), i);
                    int c2 = count(v.begin(), v.end(), j);
                    int c3 = count(v.begin(), v.end(), k);
                    if (i == j && j == k) {
                        ans += c1 * (c2 - 1) * (c3 - 2) / 6;
                    } else if (i == j && j != k) {
                        ans += c1 * (c2 - 1) / 2 * c3;
                    } else if (i != j && j == k) {
                        ans += c1 * c2 * (c3 - 1) / 2;
                    } else {
                        ans += c1 * c2 * c3;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}