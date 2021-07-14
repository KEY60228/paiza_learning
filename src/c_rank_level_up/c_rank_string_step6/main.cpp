#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2)) + 30;

    if (m >= 60) {
        m -= 60;
        h += 1;
    }

    string ans1 = to_string(h);
    string ans2 = to_string(m);

    if (ans1.length() == 1) {
        ans1 = '0' + ans1;
    }
    if (ans2.length() == 1) {
        ans2 = '0' + ans2;
    }

    cout << ans1 << ":" << ans2 << endl;

    return 0;
}
