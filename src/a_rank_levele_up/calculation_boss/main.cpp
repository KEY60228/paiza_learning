#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;

    vector<int> va1, va2;
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            va1.push_back(i);
            va2.insert(va2.begin(), a / i);
        }
    }
    va1.insert(va1.end(), va2.begin(), va2.end());

    vector<int> vb1, vb2;
    for (int i = 1; i * i <= b; i++) {
        if (b % i == 0) {
            vb1.push_back(i);
            vb2.insert(vb2.begin(), b / i);
        }
    }
    vb1.insert(vb1.end(), vb2.begin(), vb2.end());

    int ans;
    for (int i = 0; i < va1.size(); i++) {
        bool flg = false;
        for (int j = 0; j < vb1.size(); j++) {
            if (va1[va1.size() - i - 1] == vb1[vb1.size() - j - 1]) {
                ans = va1[va1.size() - i - 1];
                flg = true;
                break;
            }
        }
        if (flg) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
