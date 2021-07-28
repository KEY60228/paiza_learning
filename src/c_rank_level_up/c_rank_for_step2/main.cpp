#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool ans = false;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 7) {
            ans = true;
            break;
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
