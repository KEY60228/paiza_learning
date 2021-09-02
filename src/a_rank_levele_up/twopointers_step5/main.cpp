#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < m; i++) {
        int s, e, num;
        cin >> s >> e >> num;
        for (int j = s - 1; j < e; j++) {
            v[j] += num;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
