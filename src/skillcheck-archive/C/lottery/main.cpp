#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string b;
    int n;
    cin >> b >> n;

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (a == b) {
            cout << "first" << endl;
        } else if (stoi(a) == stoi(b) + 1 || stoi(a) == stoi(b) - 1) {
            cout << "adjacent" << endl;
        } else if (a.substr(2) == b.substr(2)) {
            cout << "second" << endl;
        } else if (a.substr(3) == b.substr(3)) {
            cout << "third" << endl;
        } else {
            cout << "blank" << endl;
        }
    }

    return 0;
}
