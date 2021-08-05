#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int ans = 0;
    if (s.length() <= t.length()) {
        for (int i = 0; i < t.length() - s.length() + 1; i++) {
            string tmp = t.substr(i, s.length());
            if (tmp == s) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}