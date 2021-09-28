#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v[i + 1] = v[i] + tmp;
    }

    int max = 0;
    for (int i = 0; i < n + 1 - k; i++) {
        if (v[i + k] - v[i] > max) {
            max = v[i + k] - v[i];
        }
    } 

    int ans = 0;
    vector<int> v2;
    for (int i = 0; i < n + 1 - k; i++) {
        if (v[i + k] - v[i] == max) {
            ans++;
            v2.push_back(i + 1);
        }
    }

    cout << ans << " " << v2[0] << endl;

    return 0;
}