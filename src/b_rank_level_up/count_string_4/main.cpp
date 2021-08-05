#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    if (s[n]) {
        cout << s[n - 1] << " " << s[n] << endl;
    }

    return 0;
}