#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int y, x, n;
    cin >> y >> x >> n;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        switch (c) {
            case 'N':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'S':
                y++;
                break;
            case 'W':
                x--;
                break;
        }
        cout << y << " " << x << endl;
    }

    return 0;
}