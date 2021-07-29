#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string s;
        int a;
        cin >> s >> a;
        m[s] = a;
    }

    string s;
    cin >> s;
    cout << m[s] << endl;

    return 0;
}