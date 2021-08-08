#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, char> mp;
    for (int i = 0; i < n; i++) {
        char s;
        int d;
        cin >> s >> d;
        mp[d] = s;
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        cout << itr->second << endl;
    }

    return 0;
}