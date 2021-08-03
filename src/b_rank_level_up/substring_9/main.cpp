#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    string dummy, s;
    cin >> a >> b;
    getline(cin, dummy);
    getline(cin, s);

    cout << s.substr(a - 1, b - a + 1);

    return 0;
}