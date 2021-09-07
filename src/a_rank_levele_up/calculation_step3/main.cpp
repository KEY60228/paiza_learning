#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    bool flg = false;
    if (n == 1) {
        flg = true;
    } else if (n != 2 && n % 2 == 0) {
        flg = true;
    } else {
        for (int i = 3; i < n; i += 2) {
            if (n != 1 && n % i == 0) {
                flg = true;
                break;
            }
        }
    }
    if (flg) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
