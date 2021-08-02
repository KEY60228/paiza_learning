#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1, 3, 5, 6, 3, 2, 5, 23, 2};

    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        ans += v[i];
    }

    cout << ans << endl;

    return 0;
}