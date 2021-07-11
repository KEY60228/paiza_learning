#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string a = to_string((s[0] - '0') + (s[3] - '0'));
    string b = to_string((s[1] - '0') + (s[2] - '0'));

    cout << a << b << endl;

    return 0;
}
