#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{4, 0, 5, -1, 3, 10, 6, -8};

    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 5) {
            sum += v[i];
        }
    }

    cout << sum << endl;

    return 0;
}