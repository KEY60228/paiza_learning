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

    int ans;
    if (v[n] < m) {
        ans = -1;
    } else {
        int j = 1;
        int sum = 0;
        while (true) {
            bool flg = false;
            for (int i = 0; i <= n - j; i++) {
                sum = v[i + j] - v[i];
                if (sum >= m) {
                    ans = j;
                    flg = true;
                    break;
                }
            }
            if (flg) {
                break;
            }
            j++;
        }
    }

    cout << ans << endl;

    return 0;
}
