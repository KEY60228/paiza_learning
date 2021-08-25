#include <iostream>

using namespace std;

int main() {
    int h, w, y, x;
    cin >> h >> w >> y >> x;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i == y && j == x) {
                cout << '!';
            } else if (i == y || j == x) {
                cout << '*';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}