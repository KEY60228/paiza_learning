#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    string t;
    int n;
    cin >> t >> n;

    map<string, string> mp;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    cout << mp[t] << endl;

    return 0;
}