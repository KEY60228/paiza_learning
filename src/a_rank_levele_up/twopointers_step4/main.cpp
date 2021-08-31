#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v[i + 1] = v[i] + tmp;
    }

    int ans = n;
    for (int i = 1; i <= n; i++) {
        bool flg = false;
        for (int j = 0; j <= n - i; j++) {
            if (v[j + i] - v[j] <= m) {
                flg = true;
                break;
            }
        }
        if (!flg) {
            ans = i - 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}