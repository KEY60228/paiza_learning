#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char c;
    cin >> c >> s;

    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}