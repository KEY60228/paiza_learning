#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int p = 1, k = 1, ans = 0;
    while (k <= n) {
        k += p * a;
        ans++;
        if (k > n) {
            break;
        }
        p += k % b;
    }

    cout << ans << endl;

    return 0;
}