#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    int m;
    cin >> m;

    map<string, string> mp;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << mp[v[i].second] << endl;
    }

    return 0;
}