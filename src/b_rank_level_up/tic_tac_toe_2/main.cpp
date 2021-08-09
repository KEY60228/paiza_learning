#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        string s;
        cin >> s;

        if (s == "OOOOO") {
            cout << 'O' << endl;
            break;
        } else if (s == "XXXXX") {
            cout << 'X' << endl;
            break;
        }
        if (i == 4) {
            cout << 'D' << endl;
        }
    }


    return 0;
}