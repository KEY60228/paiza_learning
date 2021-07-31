#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int p, q, r;
    cin >> p >> q >> r;

    map<int, int> mp1;
    for (int i = 0; i < p; i++) {
        int a, b;
        cin >> a >> b;
        mp1[a] = b;
    }

    map<int, int> mp2;
    for (int i = 0; i < q; i++) {
        int b, c;
        cin >> b >> c;
        mp2[b] = c;
    }

    for (auto itr = mp1.begin(); itr != mp1.end(); itr++) {
        cout << itr->first << " " << mp2[itr->second] << endl;
    }

    return 0;
}
