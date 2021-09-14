#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n - 1);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<pair<int,int>> seq(n);
    seq[0] = {1, 0};
    int itr = 0;
    while (itr + 1 != n) {
        for (int i = 0; i < n; i++) {
            if (seq[itr].first == v[i].first) {
                seq[itr + 1].first = v[i].second;
                v.erase(v.begin() + i);
                itr++;
                break;
            }
            if (seq[itr].first == v[i].second) {
                seq[itr + 1].first = v[i].first;
                v.erase(v.begin() + i);
                itr++;
                break;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += p[seq[i].first - 1];
        cout << ans << endl;
    }

    return 0;
}
