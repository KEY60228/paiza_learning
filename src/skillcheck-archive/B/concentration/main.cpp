#include <iostream>
#include <vector>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<vector<int>> v(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> v[i][j];
        }
    }

    int l;
    cin >> l;

    vector<int> vh(n, 0);
    int pl = 0;
    for (int i = 0; i < l; i++) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if (v[a1 - 1][b1 - 1] == v[a2 - 1][b2 - 1]) {
            vh[pl % n] += 2;
        } else {
            pl++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << vh[i] << endl;
    }

    return 0;
}
