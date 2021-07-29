#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> map;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        map[s] = 0;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        string s;
        int a;
        cin >> s >> a;
        map[s] += a;
    }

    string s;
    cin >> s;

    cout << map[s] << endl;

    return 0;
}