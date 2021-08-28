#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a += tmp;
        cout << a << endl;
    }

    return 0;
}