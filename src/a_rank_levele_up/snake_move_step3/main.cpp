#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int y, x;
    char D, d;
    cin >> y >> x >> D >> d;

    switch (D) {
        case 'N':
            switch (d) {
                case 'L':
                    x--;
                    break;
                case 'R':
                    x++;
                    break;
            }
            break;
        case 'E':
            switch (d) {
                case 'L':
                    y--;
                    break;
                case 'R':
                    y++;
                    break;
            }
            break;
        case 'S':
            switch (d) {
                case 'L':
                    x++;
                    break;
                case 'R':
                    x--;
                    break;
            }
            break;
        case 'W':
            switch (d) {
                case 'L':
                    y++;
                    break;
                case 'R':
                    y--;
                    break;
            }
            break;
    }

    cout << y << " " << x << endl;

    return 0;
}