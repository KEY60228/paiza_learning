#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        vector<int> tmpv;
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        tmpv.push_back(tmp1);
        tmpv.push_back(tmp2);
        v.push_back(tmpv);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < 2; j++) {
            cout << v[i][j];
            if (j == 0) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}