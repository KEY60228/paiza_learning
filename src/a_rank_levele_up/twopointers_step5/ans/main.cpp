#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n), vi(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < m; i++) {
        int s, e, num;
        cin >> s >> e >> num;
        vi[s - 1] += num;
        vi[e] -= num;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] + vi[i] << endl;
        vi[i + 1] += vi[i];
    }

    return 0;
}
