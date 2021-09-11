#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(n, 0));
    vector<vector<int>> v2(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a - 1][b - 1] = 1;
        v2[a - 1].push_back(b - 1);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        sort(v2[i].begin(), v2[i].end());
        for (int j = 0; j < v2[i].size(); j++) {
            cout << v2[i][j];
        }
        cout << endl;
    }

    return 0;
}
