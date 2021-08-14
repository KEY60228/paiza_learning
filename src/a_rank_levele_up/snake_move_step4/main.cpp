#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    int tmp = 0, i = 0;
    bool b = true;
    while (tmp < n) {
        i++;
        if (b) {
            x += i;
            y += i;
        } else {
            x -= i;
            y -= i;
        }
        b = !b;
        tmp += i * 2;
    }

    if (tmp != n) {
        if ((tmp - n) <= i) {
            if (b) {
                y += tmp - n;
            } else {
                y -= tmp - n;
            }
        } else {
            if (b) {
                x += tmp - i - n;
                y += i;
            } else {
                x -= tmp - i - n;
                y -= i;
            }
        }
    }

    cout << x << " " << y << endl;

    return 0;
}
