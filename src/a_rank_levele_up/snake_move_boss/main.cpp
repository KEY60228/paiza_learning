#include <iostream>

using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    // 0: N, 1: E, 2: S, 3: W
    char d = 100;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == 'L') {
            switch (d % 4) {
                case 0:
                    x--;
                    break;
                case 1:
                    y--;
                    break;
                case 2:
                    x++;
                    break;
                case 3:
                    y++;
                    break;
            }
            d--;
        } else {
            switch (d % 4) {
                case 0:
                    x++;
                    break;
                case 1:
                    y++;
                    break;
                case 2:
                    x--;
                    break;
                case 3:
                    y--;
                    break;
            }
            d++;
        }

        cout << x << " " << y << endl;
    }

    return 0;
}