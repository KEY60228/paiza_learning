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
        int g, s;
        cin >> g >> s;
        tmpv.push_back(g);
        tmpv.push_back(s);
        v.push_back(tmpv);
    }

    sort(v.begin(), v.end(), [](vector<int> &a, vector<int> &b){
        if (a[1] == b[1]) {
            return a[0] > b[0];
        }
        return a[1] > b[1];
    });

    for (int i = 0; i < v.size(); i++) {
        cout << v[i][0] << " " << v[i][1] << endl;
    }

    return 0;
}
