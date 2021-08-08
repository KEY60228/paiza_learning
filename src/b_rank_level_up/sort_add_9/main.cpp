#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        char s;
        int d;
        cin >> s >> d;
        mp[s] += d;
    }

    vector<int> v;
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        v.push_back(itr->second);
    }

    sort(v.begin(), v.end(), greater<int>{});
    vector<char> v2;
    for (int i = 0; i < v.size(); i++) {
        for (auto itr = mp.begin(); itr != mp.end(); itr++) {
            if (v[i] == itr->second) {
                v2.push_back(itr->first);
            }
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v2[i] << " " << v[i] << endl;
    }

    return 0;
}