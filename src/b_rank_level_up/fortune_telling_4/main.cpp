#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    string u;
    int n;
    cin >> u >> n;

    map<string, string> mp1;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        mp1[a] = b;
    }

    int m;
    cin >> m;

    map<string, string> mp2;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        mp2[a] = b;
    }

    cout << mp2[mp1[u]] << endl;

    return 0;
}