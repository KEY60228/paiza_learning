#include <iostream>
#include <string>

using namespace std;

int main() {
    string c;
    getline(cin, c);
    int n = stoi(c);

    for (int i = 0; i < n; i++) {
        string s = "";
        getline(cin, s);
        cout << s << endl;
    }

    return 0;
}