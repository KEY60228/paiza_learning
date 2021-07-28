#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            if (tmp == k) {
                ans++;
            }
        }
        v.push_back(ans);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}