#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a - 1].push_back(b - 1);
        v[b - 1].push_back(a - 1);
    }

    for (int i = 0; i < n; i++) {
        sort(v[i].begin(), v[i].end());
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}
