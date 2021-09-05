#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    vector<int> v{1, 0, -1};

    switch ((k - n + 1) % 3) {
        case 0:
            cout << 0 << endl;
            break;
        case 1:
            cout << v[(n - 1) % 3] << endl;
            break;
        case 2:
            cout << v[(n - 1) % 3] + v[n % 3] << endl;
            break;
    }

    return 0;
}