#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, y, x, n;
    cin >> h >> w >> y >> x >> n;

    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        cin >> v[i];
    }

    vector<int> vm(n);
    vector<char> vd(n);
    for (int i = 0; i < n; i++) {
        cin >> vm[i];
        cin >> vd[i];
    }
    v[y][x] = '*';

    int D = 100;
    for (int i = 0; i < 100; i++) {
        if (vm[0] == i) {
            if (vd[0] == 'R') {
                D++;
            } else {
                D--;
            }
            vm.erase(vm.begin(), vm.begin() + 1);
            vd.erase(vd.begin(), vd.begin() + 1);
        }
        switch (D % 4) {
            case 0:
                y--;
                break;
            case 1:
                x++;
                break;
            case 2:
                y++;
                break;
            case 3:
                x--;
                break;
        }
        try {
            if (v.at(y).at(x) == '#' || v.at(y).at(x) == '*') {
                throw exception();
            } else {
                v[y][x] = '*';
            }
        } catch (exception const & e) {
            break;
        }
    }

    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
