#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int k;
    cin >> k;

    int ans = find(v.begin(), v.end(), k) - v.begin() + 1; 
    cout << ans << endl;

    return 0;
}
