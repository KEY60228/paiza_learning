#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a == b) {
            sum += a * b;
        } else {
            sum += a + b;
        }
    }

    cout << sum << endl;

    return 0;
}