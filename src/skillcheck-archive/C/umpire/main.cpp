#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int s = 0, b = 0;
    for (int i = 0; i < n; i++) {
        string st;
        cin >> st;
        if (st == "strike") {
            if (s != 2) {
                cout << "strike!" << endl;
                s++;
            } else {
                cout << "out!" << endl;
            }
        } else {
            if (b != 3) {
                cout << "ball!" << endl;
                b++;
            } else {
                cout << "fourball!" << endl;
            }
        }
    }

    return 0;
}
