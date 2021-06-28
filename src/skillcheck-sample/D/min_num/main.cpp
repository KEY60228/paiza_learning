#include <iostream>

using namespace std;

int main() {
    int n[5], min, i;
    min = 100;

    for (i = 0; i < 5; i++) {
        cin >> n[i];
    }

    for (i = 0; i < 5; i++) {
        if (n[i] < min) {
            min = n[i];
        }
    }

    cout << min << endl;

    return 0;
}