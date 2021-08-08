#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    char ft = s[0];
    char lt = s[s.length() - 1];

    for (int i = 0; i <= lt - ft; i++) {
        char c = ft + i;
        cout << c << endl;
    }

    return 0;
}