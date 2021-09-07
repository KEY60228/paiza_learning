#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (n == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
