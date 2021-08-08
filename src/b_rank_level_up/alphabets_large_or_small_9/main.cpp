#include <iostream>
#include <string>

using namespace std;

int main() {
    string x, y, c;
    cin >> x >> y >> c;

    if (x <= y) {
        if (x <= c && c <= y) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    } else {
        cout << "false" << endl;
    }

    return 0;
}