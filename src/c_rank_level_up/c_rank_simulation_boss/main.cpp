#include <iostream>
#include <vector>

using namespace std;

int main() {
    int h;
    cin >> h;

    int n = 0;
    vector<int> p, m;
    while (h > 0) {
        n++;
        if (n == 1 || n == 2) {
            p.push_back(1);
            m.push_back(1);
            h--;
            continue;
        }
        int pa = 0, ma = 0;
        pa = m[n - 2] + m[n - 3];
        p.push_back(pa);
        ma = p[n - 2] * 2 + p[n - 3];
        m.push_back(ma);
        h -= ma;
    }

    cout << n << endl;

    return 0;
}