#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = 3 - s.length();
    for (int i = 0; i < n; i++) {
        s = '0' + s;
    }

    cout << s << endl;

    return 0;
}
