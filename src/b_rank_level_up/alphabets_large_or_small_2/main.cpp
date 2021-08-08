#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] < s[s.length() - 1]) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}