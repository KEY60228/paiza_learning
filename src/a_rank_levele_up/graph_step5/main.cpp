#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }

    vector<int> ans;
    int itr = 0;
    ans.push_back(1);
    while (itr + 1 != n) {
        for (int i = 0; i < n; i++) {
            if (ans[itr] == v[i].first) {
                ans.push_back(v[i].second);
                v.erase(v.begin() + i);
                itr++;
                break;
            }
            if (ans[itr] == v[i].second) {
                ans.push_back(v[i].first);
                v.erase(v.begin() + i);
                itr++;
                break;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}