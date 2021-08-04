#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    string dummy, s;
    cin >> a >> b;
    getline(cin, dummy);
    getline(cin, s);

    transform(s.begin() + a - 1, s.begin() + b, s.begin() + a - 1, [](unsigned char c) {
        return toupper(c);
    });
    cout << s << endl;

    return 0;
}