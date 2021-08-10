#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;

    map<string, string> mp;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    cout << s << " " << mp[s] << endl;

    return 0;
}