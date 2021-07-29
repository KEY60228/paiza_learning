#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s] = 0;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        string s;
        int a;
        cin >> s >> a;
        mp[s] += a;
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        cout << itr->second << endl;
    }

    return 0;
}