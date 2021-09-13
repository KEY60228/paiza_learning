#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(n, 0));
    vector<vector<pair<int, int>>> v2(n);
    for (int i = 0; i < m; i++) {
        int a, b, k;
        cin >> a >> b >> k;
        v[a - 1][b - 1] = k;
        v2[a - 1].push_back({b - 1, k});
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
            cout << v2[i][j].first << "(" << v2[i][j].second << ")";
        }
        cout << endl;
    }

    return 0;
}
